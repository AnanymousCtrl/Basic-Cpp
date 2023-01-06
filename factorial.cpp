#include<iostream>
using namespace std;
int main(){
	int n, i=1, f=1;
	cout<<"Enter any nummber:";
	cin>>n;
//	while(i<=n){
//		f *= i;
//		i++;
//	}
//	cout<<"Factorial of the number is:"<<f;
//	return 0;
//	
	for(i=1;i<=n;i++){
		f *=i;
	}
	cout<<"Factorial of the number is:"<<f;
    return 0;
}
