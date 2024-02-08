#include <iostream> 
using namespace std ;
int main(){
    int x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,max1,max2,max3,max4;
    cout<<"Enter 10 numbers";
    cin>>x1>>x2>>x3>>x4>>x5>>x6>>x7>>x8>>x9>>x10;
if(x1>x2 && x1>x3)  
 max1=x1 ;

else if(x2>x3 && x2>x1)  
max1=x2 ;

else if(x3>x2 && x3>x1)  
max1=x3 ;


if(x4>x5 && x4>x6)  
 max2=x4 ;

else if(x5>x4 && x5>x6)  
 max2=x5 ;

else if(x6>x5 && x6>x4)  
 max2=x6 ;

if(x7>x8 && x7>x9)  
 max3=x7 ;

else if(x8>x9 && x8>x7)  
 max3=x8 ;

else if(x9>x8 && x9>x7)  
 max3=x9 ;

if(max1>max2 && max1>max3)  
max4=max1 ;

else if(max2>max3 && max2>max1)  
 max4=max2 ;

else if(max3>max2 && max3>max1)  
 max4=max3 ;
if(max4>x10)
cout<<"The largest number is "<<max4;
else 
cout<<"The largest number is "<<x10;

return 0;



}