#include<iostream>
#include<algorithm>
using namespace std;

int main()
{

int t;
cin>>t;


while(t--){

  int x,y,z;
  cin>>x>>y>>z;


 int p=y/x;

 int w=(z-p);
 
//  cout<<w<<endl;

 if(z<p){


     cout<<0<<endl;
 }
 

 else{

     cout<<w<<endl;
 }

}
   return 0;
 }