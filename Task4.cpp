#include <iostream> 
using namespace std ;
int main(){
int x,x1,x2,x3,x4,x5;
cout<<"Enter the number";
cin>>x,
cout<<"Enter 5 numbers";
cin>>x1>>x2>>x3>>x4>>x5;
int c=0 ;
int k=0;
if(x>=x1)
 c+=1;
else 
 k+=1;

if(x>=x2)
 c+=1;
else 
 k+=1;

if(x>=x3)
 c+=1;
else 
 k+=1;

if(x>=x4)
 c+=1;
else 
 k+=1;

if(x>=x5)
 c+=1;
else 
 k+=1;

cout<<"the numbers of numbers which is greater than or equal the number you want is :"<<c<<"\n";
cout<<"the numbers of numbers which is less than  the number you want is :"<<k;

return 0;
}