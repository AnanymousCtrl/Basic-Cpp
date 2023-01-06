//finding number largest among three number
#include<iostream>
using namespace std;

int main()
{
	int a, b, c, greater;
	cout<<"Enter three numbers:";
	cin>>a>>b>>c;
	if(a>b)
		{
			if(a>c)
				greater = a;
			else
				greater = c;
	 
		}
	else
		{
			if(b>c)
				greater = b;
			else
				greater = c;
		}
	
	cout<<"Greatest of three number is:"<<greater;
	return 0;
}
