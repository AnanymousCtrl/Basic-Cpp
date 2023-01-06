#include<iostream>
using namespace std;

int main()
{
	float c, f;
	cout<<"Enter Temperature in Celcius:";
	cin>>c;
	f = float((1.8*c)+32);
	cout<<"Temperature in Fahrenhiet is:"<<f;
	return 0;
}
