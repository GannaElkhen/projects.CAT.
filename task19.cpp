#include <iostream>
using namespace std;
int main(){
int a;
cout<<"Enter the number";
cin>>a;
int b{a%10};
int c{a/10};
int d{c%10};
int e{c/10};
int f{e%10};
int sum {b+d+f};
cout<<"The sum of the last three numbers is : "<<sum;






    return 0;
}