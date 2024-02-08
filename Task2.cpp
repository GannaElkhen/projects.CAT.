#include <iostream> 
using namespace std ;
int main(){
    int x1,x2,x3;
    cout<<"Enter 3 numbers";
    cin>>x1>>x2>>x3;
    if( x1>=100 && x2>=100 && x3>=100)
    cout<<-1 ;
    else if( x1>=100 || x2>=100 || x3>=100){
        if(x1>=100){
            if(x3>x2)
            cout<<"the largest number is "<<x3;
            else
            cout<<"the largest number is "<<x2;
        }
        else if(x2>=100){
            if(x1>x3)
            cout<<"the largest number is "<<x1;
            else
            cout<<"the largest number is "<<x3;

        }
        else if(x3>=100){
            if(x1>x2)
            cout<<"the largest number is "<<x1;
            else
            cout<<"the largest number is "<<x2;

        }
    }
        else{
        if(x1>x2 && x1>x3)
        cout<<"the largest number is "<<x1;
        else if(x2>x3 && x2>x1)
        cout<<"the largest number is "<<x2;
        else 
        cout<<"the largest number is "<<x3;
        }

        
    
        
return 0;


    
}