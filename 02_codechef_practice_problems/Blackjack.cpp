#include<iostream>
using namespace std;

int main()
{

  int t;
  cin>>t;

  while(t--){


      int a,b;   //2 no's drawn by the chef.
      cin>>a>>b;

      if(a+b>=11){

          cout<<21-(a+b)<<endl;
      }
       else{

           cout<<-1<<endl;
       }

  }
     
   return 0;
 }