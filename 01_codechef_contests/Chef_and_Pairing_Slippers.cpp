#include<iostream>
#include<algorithm>
using namespace std;

int main()
{

 int  t;
 cin>>t;

 while(t--)
 {
 int n,l,x;
 cin>>n>>l>>x;

  if(n==0 || l==0){

      cout<<0<<endl;
  }
  else {

       int p=(n-l);

       cout<<min(l,p)*x<<endl;

  }

 }
   return 0;
 }