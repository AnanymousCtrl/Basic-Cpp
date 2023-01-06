#include<iostream>
using namespace std;

int main()
{
	int row, cln;
	cout<<"Enter no. of rows and column:";
	cin>>row>>cln;
	
	for(int i=1;i<=row;i++){
		for(int j=1;j<=cln;j++){
			if(i==1 || i==row || j==1 || j==cln)
				cout<<"*";
			else
				cout<<" ";
		}
		cout<<"\n";
	}
	
}
