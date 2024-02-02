#include <iostream>
using namespace std;
int main(){
    int start_num,end_num;
    cout<<"Enter start number";
    cin>>start_num;
    cout<<"Enter end number";
    cin>>end_num;
    
   int sum1 {end_num * (end_num + 1)/2};
    cout<<"The sum of numbers from 1 to "<<end_num <<" is :"<<sum1<<"\n" ;
    
    int sum2{start_num *(start_num+1)/2};
    int sum3{sum1-sum2+start_num};
    cout<<"The sum of numbers from "<<start_num<<" to "<<end_num<<" is :"<<sum3;




  return 0;

}