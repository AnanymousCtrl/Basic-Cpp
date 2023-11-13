#include <iostream>
#include <conio.h>

using namespace std;

class Wheel {
	private:
	    int diameter;
	
	public:
	    Wheel(int diameter_in) {
	        diameter = diameter_in;
	    }
	
	    int getDiameter() {
	        return diameter;
	    }
};

class Engine {
	private:
	    int cc;
	
	public:
	    Engine(int cc_in) {
	        cc = cc_in;
	    }
	
	    int getCC() {
	        return cc;
	    }
};

class Car {
	private:
	    Wheel nearside_front, offside_front, nearside_rear, offside_rear;
	    Engine engine;
	    int passengers;
	
	public:
	    Car(int diameter_in, int cc_in, int passengers_in);
	    void showSelf();
};

Car::Car(int diameter_in, int cc_in, int passengers_in)
    : nearside_front(diameter_in),
      offside_front(diameter_in),
      nearside_rear(diameter_in),
      offside_rear(diameter_in),
      engine(cc_in) {	
		passengers = passengers_in;
	  }

void Car::showSelf() {
    cout << "Wheel size for all wheels: " << nearside_front.getDiameter() << " inches" << endl;
    cout << "Engine capacity: " << engine.getCC() << " cc" << endl;
    cout << "Number of passengers: " << passengers << endl;
}

int main() {
    Car my_car(24, 500, 2);
    my_car.showSelf();
    getch();
    return 0;
}

