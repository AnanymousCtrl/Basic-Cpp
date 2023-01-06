#include<iostream>
using namespace std;

int main(){
	int n,A=1;
	cout<<"Enter no. of rows:";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<A<<" ";
			A++;
		}
		cout<<endl;
	}
	return 0;
}
