#include<iostream>
using namespace std;

int main(){
	int a[10], sum;
	cout<<"Enter the elements of an Array:";
	for(int i=0;i<10;i++){
		cin>>a[i];
		sum += a[i];
	}
	cout<<sum;
	return 0;
}
