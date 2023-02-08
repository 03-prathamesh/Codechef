#include<iostream>
using namespace std;

int main()
{

 int t;
 cin>>t;


 while(t--){

  int x;
  cin>>x;


  int p=((x/2)+x)-1;

//   cout<<p<<endl;

 if(x%2==0){


     cout<<(x/2)+x<<endl;
 }
 else{

     cout<<p<<endl;
 }





 }



   return 0;
 }