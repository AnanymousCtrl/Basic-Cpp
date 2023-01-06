//average of three number using c and cpp both
#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"Enter three numbers:";
	cin>>a>>b>>c;
	float average = (float)(a+b+c)/3;
	cout<<"Average = ";
	printf("%f",average);
	return 0;
}
