#include<iostream>
using namespace std;

int main(){
	int arr[50], i, n, sum=0;
	cout<<"Enter the number of elements in the array: ";
	cin>>n;
	cout<<"enter the elements of the array: ";
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	int small=INT_MAX;
	for(i=0;i<n;i++){
		if(arr[i]<small)
		{
			small=arr[i];
		}
	}
	int large=INT_MIN;
	for(i=0;i<n;i++){
		if(arr[i]>large){
			large=arr[i];
		}
	}
	cout<<"\n"<<small;
	cout<<"\n"<<large;
	
	//sum of elements
	for(i=0;i<n;i++){
		sum+=arr[i];
	}
 	cout<<"\n"<<sum;
 	return 0;
}
