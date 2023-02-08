#include<iostream>
using namespace std;

int main()
{



int t;
cin>>t;


 while(t--){

   int A,B,C;
   cin>>A>>B>>C;

   
   if(A<=B && A<=C){

       cout<<B+C<<endl;

   }
    else if(B<=A && B<=C){

        cout<<A+C<<endl;

    }

    else if(C<=A && C<=B){

        cout<<A+B<<endl;

    }
     else{

        cout<<A+B<<endl;
         
     }
 }
   return 0;
 }