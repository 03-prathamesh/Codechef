#include<iostream>
using namespace std;

int main()
{

int t;
cin>>t;

while(t--){

    int same=0;
    int n;
    cin>>n;

  int  arr[n];

  for(int i=0;i<n;i++){

      cin>>arr[i];
  }

     
  int array[8]={6,7,13,14,21,22,27,28};

  for(int j=0;j<n;j++){

      for(int p=0;p<8;p++){

          if(arr[j]==array[p]){

              //same++;
              same=same+1;
          }
      }

      
  }



  cout<<8+(n-same)<<endl;





}

   return 0;
 }