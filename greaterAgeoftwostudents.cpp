//greater age of two students
#include<iostream>
using namespace std;

int main()
{
	int a, b, greater;
	cout<<"Enter age of two students:";
	cin>>a>>b;
	if(a>b)
		greater = a;
	else
		greater = b;
	
	cout<<"Greater of two ages is:"<<greater;
	return 0;
}
