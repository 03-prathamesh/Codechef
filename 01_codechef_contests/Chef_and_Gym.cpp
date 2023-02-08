#include<iostream>
using namespace std;

int main()
{

int t;
cin>>t;


while(t--){



  int a,b,c;
  cin>>a>>b>>c;


   if((a+b)<=c){


       cout<<2<<endl;
   }
   else if((a+b)>c  &&  (c>=a)){


      cout<<1<<endl;

   }
   else{

       cout<<0<<endl;
   }




}

   return 0;
 }