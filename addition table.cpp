#include<iostream>
using namespace std;

int main(){
	int n, i;
	cout<<"Enter any number:";
	cin>>n;
	for(i=0;i<10;i++){
		cout<<n*i<<" + "<<n<<" = "<<(n*i)+n;
		cout<<endl;
	}
	return 0;
}
