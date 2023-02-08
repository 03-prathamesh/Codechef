#include<iostream>
using namespace std;

int main()
{


int  t;
cin>>t;

while(t--){

 int x,y;    //x=coin of 10 rupees & y=coin of 5 rupees 
 cin>>x>>y;

  int p=10*x;
  int q=5*y;

  cout<<p+q<<endl;

}
   return 0;
 }