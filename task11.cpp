#include <iostream>
using namespace std;
int main(){
int num1,num2;
cout<<"Enter first number ";
cin>>num1;
cout<<"Enter second number";
cin>>num2;
int num3 = num1+num2;
  num2 = num3-num2;
  num1 = num3-num1;


cout<< " first number is "<<num1<<"\n"<<"second number is "<<num2;
return 0;

}