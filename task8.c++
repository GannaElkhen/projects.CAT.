#include <iostream>
using namespace std;
int main(){
string name1,name2;
int id1,id2,grad1,grad2;
cout<<"Enter the name of fist student";
cin>>name1; 
cout<<"Enter the id of fist student";
cin>>id1;
cout<<"Enter the grad of fist student";
cin>>grad1;
cout<<"Enter the name of second student";
cin>>name2; 
cout<<"Enter the id of second student";
cin>>id2;
cout<<"Enter the grad of second student";
cin>>grad2;
double avarage{(grad1+grad2)/2};
cout<<"The name of first student is "<< name1<<"\n";
cout<<"The id of the first student is "<<id1<<"\n";
cout<<"Thegrade of first student is "<<grad1<<"\n";
cout<<"The name of second student is "<< name2<<"\n";
cout<<"The id of the second student is "<<id2<<"\n";
cout<<"grade of second student is "<<grad2<<"\n";
cout<<"The avarage of grades is :"<< avarage;

return 0;


}