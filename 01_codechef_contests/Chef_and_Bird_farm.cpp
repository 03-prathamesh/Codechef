#include<iostream>
using namespace std;

int main()
{


 int t;
 cin>>t;

 while(t--){

   int c,d,b;
   cin>>c>>d>>b;


   if((b%c)==0  && (b%d)!=0){

       cout<<"CHICKEN"<<endl;
   }
   else if((b%d)==0  && (b%c)!=0){

       cout<<"DUCK"<<endl;
   }
   else if((b%d)==0  && (b%c)==0){

       cout<<"ANY"<<endl;
   }
   else{

       cout<<"NONE"<<endl;
   }



 }
   return 0;
 }