#include<iostream>
using namespace std;
int calculate(int a, int b, char operation)
 
{
  switch (operation) {
    case
 
'+':
      return a + b;
    case
 
'-':
      return a - b;
    case
 
'*':
      return a * b;
    case
 
'/':
      return a / b;
    default:
      cout<<"Invalid Argument";
  }
}


int calculate(int a, int b, int c, char operation) {
  switch (operation) {
    case '+':
      return a + b + c;
    case '-':
      return a - b - c;
    case '*':
      return a * b * c;
    case '/':
      return a / b / c;
    default:
      cout<<"Invalid Argument";
  }
}
int calculate(int a, int b, int c, int d, char operation) {
  switch (operation) {
    case '+':
      return a + b + c + d;
    case '-':
      return a - b - c - d;
    case '*':
      return a * b * c * d;
    case '/':
      return a / b / c / d;
    default:
      cout<<"Invalid Argument";
  }
}
int main(){


int result = calculate(1, 2, '+');
int result1 = calculate (5,1,2,'-');
int result2 = calculate(8,9,7,2,'*');
cout<<result<<endl;
cout<<result1<<endl;
cout<<result2<<endl;
return 0;
}

