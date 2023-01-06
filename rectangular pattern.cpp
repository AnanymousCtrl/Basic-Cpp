#include<iostream>
using namespace std;

int main()
{
	int row, cln;
	cout<<"Enter no. of rows and column:";
	cin>>row>>cln;
	
	for(int i=1;i<=row;i++){
		for(int j=1;j<=cln;j++){
			cout<<"*";
		}
		cout<<"\n";
	}
}
