//making a simple calculator
#include<iostream>
using namespace std;
int main()
{
	int a, b, choice;
	cout<<"Enter any two numbers:";
	cin>>a>>b;
	cout<<"Enter your choice:";
	cout<<"\n 1 for +";
	cout<<"\n 2 for -";
	cout<<"\n 3 for *";
	cout<<"\n 4 for /";
	cout<<"\n 5 for %";
	cin>>choice;
	switch(choice)
	{
		case 1: cout<<"\n Sum of two number is:"<<a+b;
		break;
		case 2: cout<<"\n Difference of two number is:"<<a-b;
		break;
		case 3: cout<<"\n Product of two number is:"<<a*b;
		break;
		case 4: cout<<"\n Division of two number is:"<<a/b;
		break;
		case 5: cout<<"\n Remainder of two number is:"<<a%b;
		break;
		Default:cout<<"wrong choice";
		}
		return 0;
		
}
