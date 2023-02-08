#include<iostream>
#include<cmath>
using namespace std;

int main()
{

int x;
cin>>x;


while(x--){

   int x,y,d;
   cin>>x>>y>>d;


   int p=abs(x-y);

   if(p<=d){

       cout<<"YES"<<endl;
   }
   else  if(p>d){

       cout<<"NO"<<endl;
   }




}
   return 0;
 }