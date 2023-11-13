#include <stdio.h>

// Define a structure to represent a person
struct Person {
    char name;
    int age;
};

int main() {
    // Create an instance of the Person structure
    struct Person person1;

    // Assign values to the members of the structure
    person1.name = "jhon";
    person1.age = 30;

    // Display the information
    printf("Name: %s", &person1.name);
    printf("\nAge: %d", person1.age);
    
    return 0;
}

