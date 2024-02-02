#include <iostream>
using namespace std;
int main(){
    double x1,x2,x3,x4,x5;
cout<<"Enter 5 numbers";
cin>>x1>>x2>>x3>>x4>>x5;
double avarage1{(x1+x2+x3+x4+x5)/5};
cout<<"the avarage of these numbers is :"<<avarage1<<"\n";
double avarage2{(( x1+x2+x3)/3)/((x4+x5)/2)};
cout<<"the avarage of fist three numbers divided by the avarage of last two numbers is :"<<avarage2 <<"\n";
double sum {(x1+x2+x3)/(x4+x5)};
cout<<"the sum of first three numbers divded by the sum of last two numbers is : "<<sum <<"\n";



return 0;
}
