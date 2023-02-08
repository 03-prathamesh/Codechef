#include<iostream>
using namespace std;

int main()
{


// int arr[5]={10,20,30,40,50};

//  int  s=sizeof(arr)/sizeof(arr[0]);

// cout<<s<<endl;
//  for(int i=s-1;i>=0;i--){



//      cout<<arr[i]<<endl;
//  }

int t;
cin>>t;

while(t--){


 int d,n;
 cin>>d>>n;


int curr=n;
 for(int i=1;i<=d;i++){

     curr=(curr*(curr+1))/2;

 }

 cout<<curr<<endl;

}
   return 0;
 }