#include<iostream>
#include<cmath>
using namespace std;

int main()
{

int t;
cin>>t;

 while(t--){

    int x,y,z;
    cin>>x>>y>>z;


    int a=(x*y);
    int b=(x+z);

      int c=min(a,b);
      cout<<c<<endl;

 }

   return 0;
 }