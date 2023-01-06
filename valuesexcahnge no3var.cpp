#include<iostream>
using namespace std;

int main()
{
	float a, b;
	cout<<"Enter a:";
	cin>>a;
	cout<<"Enter b:";
	cin>>b;
	cout<<"Values a="<<a<<" b="<<b;
	a = a+b;
	b = a-b;
	a = a-b; 
	cout<<"\nExchanged values a="<<a<<" b="<<b;
	return 0; 
}
