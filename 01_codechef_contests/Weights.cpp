#include<iostream>
using namespace std;

int main()
{
    
 int t;
 cin>>t;

  while(t--){

   
   int a,b,c,d;
   cin>>a>>b>>c>>d;


     if((b+c)==a || (c+d)==a || (b+d)==a || (b+c+d)==a || b==a || c==a || d==a){

        cout<<"YES"<<endl;
     }
     else{

        cout<<"NO"<<endl;
     }







  }



   return 0;
}