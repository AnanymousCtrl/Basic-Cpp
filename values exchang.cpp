#include<iostream>
using namespace std;

int main()
{
	float a, b, c;
	cout<<"Enter a:";
	cin>>a;
	cout<<"Enter b:";
	cin>>b;
	cout<<"Values a="<<a<<" b="<<b;
	c = a, a = b, b = c;
	cout<<"\nExchanged values a="<<a<<" b="<<b;
	return 0;  
}
