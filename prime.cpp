#include<iostream> 
using namespace std; 
int main() { 
	int i,j, n, count,b=0;
	cout<<"Enter no. of prime numbers you want:";
	cin>>n;
	cout<<"Prime Numbers Are\n"<<"2"; 
	for(i=3;i>0;++i){ 
		for(j=2;j<=i/2;++j){ 
			if(i%j==0){ 
				b=1; break; 
				} 
			} 
	
	if(b==0){ 
		cout<<"\n"<<i; 
		count++; 
		} 
		b=0; 
	if(count==n-1) 
		break; 

	}   
	return 0; 
}
