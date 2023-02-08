#include<iostream>
using namespace std;

int main()
{
int a=0;
int p;
cout<<"Enter the value of P: "<<endl;
cin>>p;

    for(int i=0;i<p;i++){

//int a=0;    // this gives you errror because we cannot access this a outside loop.
//cout<<a<<endl;

  a=a+1;     //a++;


    }

    cout<<a<<endl;
    
   return 0;
 }