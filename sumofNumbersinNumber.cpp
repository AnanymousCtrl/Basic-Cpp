#include<iostream>
using namespace std;

int main()
{
	int a, rev = 0, rem;
	cout<<"Enter any number:";
	cin>>a;
	
	rem = a%10;
	a = a/10;
	rev = rev+rem;
	
	rem = a%10;
	a = a/10;
	rev = rev+rem;
	
	rem = a%10;
	a = a/10;
	rev = rev+rem;
	
	rem = a%10;
	a = a/10;
	rev = rev+rem;
	
	rem = a%10;
	a = a/10;
	rev = rev+rem;
	
	cout<<"Sum of numbers is:"<<rev;
	return 0;

}
