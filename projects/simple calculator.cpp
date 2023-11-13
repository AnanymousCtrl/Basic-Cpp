#include<iostream>
using namespace std;

int main(){
	int a,b,c,n;
	int add(int,int);
    int sub(int,int);
	int mul(int,int); 
do{
	cout<<"Enter two Integer:\n";
	cin>>a>>b;
	cout<<"\nEnter your operation:";
	cout<<"\n1: Addition \n2: Substraction \n3: Product \n4: EXIT\n";
	cin>>n;
	switch(n){
		case 1:{
			c =	add(a,b);
			cout<<c<<"\n";
			break;
		}
		case 2:{
			c = sub(a,b);
			cout<<c<<"\n";
			break;
		}
		case 3:{
			c = mul(a,b);
			cout<<c<<"\n";
			break;
		}
		case 4:{
			exit(0);
			break;
		}
		default:{
			cout<<"Enter the right choice.....";
			break;
		}
	}
  }
  while(n!=4);
  return 0;

}
int add(int a, int b){
	return a+b;
}
int sub(int a, int b){
	return a-b;
}
int mul(int a, int b){
	return a*b;
}
