#include <iostream> 
using namespace std ;
int main(){

    int x1,x2,x3;
    cout<<"Enter 3 numbers";
    cin>>x1>>x2>>x3;
    if(x1>x2 && x1>x3){
        if(x2>x3){
            int sum1=x1+x3;
            x1=sum1-x1;
            x3=sum1-x3;
            cout<<x1<<x2<<x3;
        }
        else{
            int sum1=x2+x3;
            x2=sum1-x2;
            x3=sum1-x3;
            int sum2=x1+x3;
            x1=sum2-x1;
            x3=sum2-x3;
            cout<<x1<<x2<<x3;
        }
    }
    else if(x3>x1 && x3>x2 && x1>x2){
        int sum=x1+x2;
        x1=sum-x1;
        x2=sum-x2;
        cout<<x1<<x2<<x3;
    }

else if(x2>x1 && x2>x3){
if(x1>x3){
    int sum1=x1+x3;
    x1=sum1-x1;
    x3=sum1-x3;
    int sum=x2+x3;
    x2=sum-x2;
    x3=sum-x3;
    cout<<x1<<x2<<x3;
}
else{
    int sum=x2+x3;
    x3=sum-x3;
    x2=sum-x2;
    cout<<x1<<x2<<x3;
}

}


else
cout<<x1<<x2<<x3;



return 0;
    
}