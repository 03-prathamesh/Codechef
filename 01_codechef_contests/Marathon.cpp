#include<iostream>
using namespace std;

int main(){


  int t;
  cin>>t;

  while(t--){

   int D,d,A,B,C;
   cin>>D>>d>>A>>B>>C;

   
   int p=D*d;

   if(p<10){

       cout<<0<<endl;
   }
   else if(p>=10 && p<21){

       cout<<A<<endl;
   }
   else if(p>=21  && p<42){

       cout<<B<<endl;
   }
   else {
       cout<<C<<endl;
   }


  }



    return 0;
}