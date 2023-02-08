#include<iostream>
using namespace std;

int main()
{

int t;

cin>>t;

 while(t--){

  int p,n,k;
  cin>>p>>n>>k;


  if((k/n)<=p){


      cout<<k/n<<endl;
  }
  else if(n>k){

      cout<<0<<endl;
  }
  else{
      cout<<p<<endl;
  }






 }



   return 0;
 }