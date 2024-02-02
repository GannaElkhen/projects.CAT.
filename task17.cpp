#include <iostream>
using namespace std;
int main(){
    cout<<"Enter two positive integer numbers";
    int a,b ;
    cin>>a>>b;
    int c{a/b};
    int r{a-c*b};
    cout<<"The reminder is : "<<r ;
}
