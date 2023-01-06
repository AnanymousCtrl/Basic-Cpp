#include<iostream>
using namespace std;

int main(){
	int a, b, c, n, i;
	cout<<"Enter first two number of series:";
	cin>>a>>b;
	cout<<"Fibonacci Series is: "<<a<<" "<<b;
	for(i=3;i<=100;i++){
		c=a+b;
		cout<<" "<<c;
		a=b;
		b=c;
	}
	return 0;
}
