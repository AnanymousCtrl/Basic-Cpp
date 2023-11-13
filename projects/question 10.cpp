//ques 10
#include<iostream>
using namespace std;

int main(){
	double num, den, devide;
	cout<<"\n Enter Numerator: ";
	cin>>num;
	cout<<"\n Emter Denominator: ";
	cin>>den;
	try{ 
        if(den==0)
		 	throw 0;
        else
			 devide = num/den;
		
		cout<<num<< "/" <<den<<" = "<<devide; 
	}
	catch(int num_ex){
		cout<<"Error can not divide by: "<<num_ex;
	}
	return 0;
}
