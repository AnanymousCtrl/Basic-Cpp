//finding average of three number using cpp only
#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"Enter three numbers:";
	cin>>a>>b>>c;
	float average = (float)(a+b+c)/3;
	cout<<"Average = "<<average;
	return 0;
}
