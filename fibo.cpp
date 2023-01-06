#include<iostream>
using namespace std;

int main(){
    int t1, t2, t3 = 0, n;
	cout<<"Enter first two number:";
	cin>>t1>>t2;
    cin>>n;

    cout<<"Fibonacci Series: "<<t1<<", "<<t2<<", ";

    t3 = t1 + t2;

    while(n>=3){
        cout<<t3<<", ";
        t1 = t2;
        t2 = t3;
        t3 = t1 + t2;
        n--;
    }
    return 0;
}
