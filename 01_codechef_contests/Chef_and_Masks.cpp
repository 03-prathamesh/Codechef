#include<iostream>
using namespace std;

int main()
{

int  t;
cin>>t;

while(t--){


 int a,b;
 cin>>a>>b;


 if((a*100)<(b*10)){



     cout<<"Disposable"<<endl;
 }
 else if((a*100)==(b*10)){


     cout<<"Cloth"<<endl;
 }
 else{


     cout<<"Cloth"<<endl;
 }



}
   return 0;
 }