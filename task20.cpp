#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number";
    cin>>x;
    int c{x/1000};
    int y{c%10};
    cout<<"The forth number from right side is : "<<y;


    return 0;
}