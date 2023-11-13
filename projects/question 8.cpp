//ques 8
#include <iostream>
using namespace std;

class Time {
private:
    int minutes;
    int seconds;


public:
    Time(int min, int sec) : minutes(min), seconds(sec) {}


    Time operator+(const Time& other) {
        int totalMinutes = minutes + other.minutes;
        int totalSeconds = seconds + other.seconds;


        if (totalSeconds >= 60) {
            totalMinutes += totalSeconds / 60;
            totalSeconds %= 60;
        }


        return Time(totalMinutes, totalSeconds);
    }


    void display() {
        cout << minutes << " minutes " << seconds << " seconds";
    }
};


int main() {
    Time phase1(3, 45);
    Time phase2(2, 30);


    Time totalTime = phase1 + phase2;


    cout << "Total time taken by the winner: ";
    totalTime.display();
    cout << endl;


    return 0;
}

