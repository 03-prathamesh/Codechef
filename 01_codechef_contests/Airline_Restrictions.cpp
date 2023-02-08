#include<iostream>
#include<cmath>
using namespace std;

int main()
{

int t;
cin>>t;

while(t--){


  int a,b,c,p,q;
  cin>>a>>b>>c>>p>>q;


int mx=max(a,max(b,c));
int mi=min(a,min(b,c));


  if(mx>=p  ||  mi>=q){


      cout<<"NO"<<endl;
  }
  else{

      cout<<"YES"<<endl;
  }




}
   return 0;
 }