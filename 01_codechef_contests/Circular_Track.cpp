#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{

int t;
cin>>t;


while(t--){

int a,b,m;
cin>>a>>b>>m;


   int ck=abs(b-a);
   int ack=abs(m-b)+a;


   cout<<min(ck,ack)<<endl;




}
   return 0;
 }