#include<iostream>
using namespace std;

int main(){
	int i, n, range;
	cout<<"Find prime number upto:";
	cin>>range;
	cout<<"\n All prime numbers upto "<<range<<" are:";
	for(n=2;n<=range;n++){
		for(i=2;i<=n/2;i++){
			if(n%i==0){
				i=n;
				break;
			}
		}
		if(i!=n){
			cout<<n<<" ";
		}
	}
	return 0;
}
