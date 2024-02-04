#include <iostream>
using namespace std;
int main(){
int A;
cout<<"Enter days";
cin>>A;
int B{A/30}; //we will get the all months
int C{B/12}; //we will get the number of years
int D{B%12}; //we will get the rest of months
int E{A-(C*360+D*30)}; //we will get the rest of days
cout<<"YOU Have "<<C <<" Years ,"<<D<<" Months ,and "<<E<<" Days";





}