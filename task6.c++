#include <iostream>
using namespace std;
int main(){
    int x1,x2,x3,x4,x5,x6,x7,x8;
    cout<<"Enter Numbers";
    cin>>x1>>x2>>x3>>x4>>x5>>x6>>x7>>x8;
int sum_odd{x1+x3+x5+x7};
int sum_even{x2+x4+x6+x8};
cout<< "The sum of odd places is :"<<sum_odd<<"\n";
cout<<"The sum of even places is :"<<sum_even;


return 0;
}