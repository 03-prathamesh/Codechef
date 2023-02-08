#include<iostream>
using namespace std;

int main()
{

int t;
cin>>t;



while(t--){

 int n,x,y;   //n=no of friend +1 including you , x=no of gold ,y= capacitry to pick up gold    
 cin>>n>>x>>y;       

 n=n+1;


 if((n*y)>=x){

     cout<<"YES"<<endl;
 }
 else{

     cout<<"NO"<<endl;
 }


}
   return 0;
 }