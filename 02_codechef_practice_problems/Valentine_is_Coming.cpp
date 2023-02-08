#include<iostream>
using namespace std;

int main()
{


  int t;
  cin>>t;


 while(t--){

     int x,y;   //x = total rupees & y= chocolate costs
     cin>>x>>y;


     if(x<y){

         cout<<0<<endl;
     }
     else if(x>y){

         cout<<x/y<<endl;
     }
     else{
        cout<<1<<endl; 
     }
 }




   return 0;
 }