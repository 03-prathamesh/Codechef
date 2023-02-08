#include<iostream>
using namespace std;

int main()
{

int t;
cin>>t;

while(t--){


 int n,x;
 cin>>n>>x;

int p=n-1;

 int a[p];

 for(int i=0;i<p;i++){



     cin>>a[i];
 }

 int sum=0;

  for(int j=0;j<p;j++){

     sum=sum+a[j];

  }

 // cout<<sum<<endl;

     int y=(n*x)-sum;

     //cout<<y<<endl;


 if(y>=1){

   cout<<y<<endl;
 }
 else{

   cout<<0<<endl;
 }


//  if(y>=n){

//    cout<<y<<endl;
//  }
//  else{

   
//  }



}
   return 0;
 }