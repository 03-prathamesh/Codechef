#include<iostream>
using namespace std;

int main()
{

int t;
cin>>t;

while(t--){


 int x,y,z,w;
 cin>>x>>y>>z>>w;

  
  if((w*z)+x==y){

      cout<<"filled"<<endl;
  }
  else if((w*z)+x>y){

      cout<<"overFlow"<<endl;
  }
  else{

      cout<<"Unfilled"<<endl;
  }





}
   return 0;
 }