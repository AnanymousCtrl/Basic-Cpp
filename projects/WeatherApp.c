#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <curl/curl.h>
#include <jansson.h> // JSON parsing library

#define API_KEY "7afee5506e7ac2b8cb82ef04aedb1741" // Replace with your actual API key

// Function to handle HTTP request and response.
size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp) {
    size_t real_size = size * nmemb;
    char *data = (char *)userp;

    strcat(data, (char *)contents);
    return real_size;
}

int main() {
    CURL *curl;
    CURLcode res;
    char weatherData[4096] = {0}; // Buffer to store weather data
    char city[100];

    printf("Enter the city: ");
    scanf("%s", city);

    // Construct the API endpoint
    char apiEndpoint[200];
    sprintf(apiEndpoint, "https://api.openweathermap.org/data/2.5/weather?q=%s&appid=%s", city, API_KEY);

    curl_global_init(CURL_GLOBAL_ALL);
    curl = curl_easy_init();

    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, apiEndpoint);
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, weatherData);

        res = curl_easy_perform(curl);

        if (res != CURLE_OK) {
            fprintf(stderr, "Error while fetching weather data: %s\n", curl_easy_strerror(res));
            return 1;
        }

        curl_easy_cleanup(curl);
    }

    // Parse JSON response
    json_error_t json_error;
    json_t *root = json_loads(weatherData, 0, &json_error);

    if (!root) {
        fprintf(stderr, "JSON parsing error: %s\n", json_error.text);
        return 1;
    }

    // Extract weather information
    json_t *main = json_object_get(root, "main");
    double temperature = json_number_value(json_object_get(main, "temp"));
    double humidity = json_number_value(json_object_get(main, "humidity"));

    json_t *weather = json_object_get(root, "weather");
    const char *description = json_string_value(json_object_get(weather, "description"));

    json_t *rain = json_object_get(root, "rain");
    double rainVolume = 0.0;

    if (json_is_object(rain)) {
        rainVolume = json_number_value(json_object_get(rain, "1h"));
    }

    // Display weather information
    printf("Weather in %s:\n", city);
    printf("Temperature: %.2f°C\n", temperature - 273.15); // Convert from Kelvin to Celsius
    printf("Sky Condition: %s\n", description);
    printf("Humidity: %.2f%%\n", humidity);
    printf("Chance of Rain (1 hour): %.2f mm\n", rainVolume);

    // Clean up
    json_decref(root);

    return 0;
}

