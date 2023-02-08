#include<iostream>
using namespace std;

int main()
{

int t;
cin>>t;

while(t--){

int a,b;
cin>>a>>b;


  int p=(b-a)+8;

 // cout<<p/8<<endl;

  if((p%8)==0){


      cout<<(p/8)-1<<endl;
  }
  else{

      cout<<(p/8)<<endl;
  }


}
   return 0;
 }