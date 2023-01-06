#include<iostream>
using namespace std;

int main()
{
	float c, f;
	cout<<"Enter temprature in Fahrenhiet:";
	cin>>f;
	c = float(.555555556*(f-32));
	cout<<"Temperature in Celcius is:"<<c;
	return 0;
}
