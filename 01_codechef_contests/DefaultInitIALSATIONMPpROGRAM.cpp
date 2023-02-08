#include<iostream>
using namespace std;

int main()
{

int a=0;   // default initalisation that is this does not gives garbage values. 
int b=0;
int arr[4]={10,20,20,40};


for(int i=0;i<4;i++){
  if(arr[i]==arr[i+1]){

      a++;
  }
  else{

      b++;
  }
}


 cout<<a<<endl;
 cout<<b<<endl;
   return 0;
 }