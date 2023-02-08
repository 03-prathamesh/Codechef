#include<iostream>
#include<Algorithm>
using namespace std;

int main()
{



int t;
cin>>t;



while(t--){


 int size,n;

 cout<<"ENter the size & NEED ruppes of Array...."<<endl;
 cin>>size>>n;


 int arr[size];

 for(int i=0;i<size;i++){


     cout<<"ENter element to add to this array"<<endl;
     cin>>arr[i];
 }


  int x=*max_element(arr[size],arr[size-1]);
  cout<<x;
}

   return 0;
 }