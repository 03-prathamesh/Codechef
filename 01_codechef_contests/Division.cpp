#include<iostream>
using namespace std;

int main()
{



 int x,y;
 cout<<"Enter Divider:  "<<endl;
 cout<<"Enter Divisor: "<<endl;
 cin>>x>>y;


 if(x%y==0){

     cout<<"Successfull"<<endl;
     cout<<"Remainder= "<<x%y<<endl;
     cout<<"Questient= "<<x/y<<endl;
     cout<<x/y*y<<endl;
 }

 
 else{

     cout<<"NotSuccessfull(PRIME NUMBER)"<<endl;
 }


   return 0;
 }