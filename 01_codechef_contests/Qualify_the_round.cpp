#include<iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;

while(t--){

     int x,y,z;
     cin>>x>>y>>z;

//    y=y+1;
//    z=z+1;

   int a=(y*1);
   int b=(z*2);

   if((a+b)>=x ){

       cout<<"Qualify"<<endl;
   }
   else{
       cout<<"NotQualify"<<endl;
   }



}
   return 0;
 }