//finding area and perimeter of a rectangle
#include<iostream>
using namespace std;

int main()
{
	int l,b;
	cout<<"Enter Length and Breadth:";
	cin>>l>>b;
	float peri = (float)(l+l+b+b);
	float area = (float)l*b;
	cout<<"Perimeter ="<<peri;
	cout<<"\nArea ="<<area;
	return 0;
	
}
