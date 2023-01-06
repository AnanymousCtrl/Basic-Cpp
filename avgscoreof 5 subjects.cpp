#include<iostream>
using namespace std;

int main()
{
	float a, b, c, d, e, avg;
	cout<<"Enter scores of five subjects:";
	cin>>a>>b>>c>>d>>e;
	avg = float((a+b+c+d+e)/5);
	cout<<"Average score is:"<<avg;
	return 0; 
}
