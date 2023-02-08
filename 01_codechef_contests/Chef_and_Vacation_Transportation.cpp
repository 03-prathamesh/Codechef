#include<iostream>
using namespace std;

int main()
{

int t;
cin>>t;


while(t--){

 int x,y,z;
 cin>>x>>y>>z;

int p=x+y;

 if(p>z){

     cout<<"TRAIN"<<endl;
 }
 else if(p<z){

     cout<<"PLANEBUS"<<endl;

 }
 else {

     cout<<"EQUAL"<<endl;
 }





}


   return 0;
 }