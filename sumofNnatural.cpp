#include<iostream>
using namespace std;

int main()
{
	int n, s, i;
	cout<<"Enter any number:";
	cin>>n;
	for(i=1;i<=n;i++){
		s+=i;
	}
	cout<<"Sum="<<s;
	return 0;
}
