#include<iostream>
using namespace std;

int main()
{

int t;
cin>>t;

while(t--){


 int a,b;
 cin>>a>>b;

  
//A->B

  int c=(500-a*2);
  //cout<<c<<endl;
  int d=(1000-(a+b)*4);
  //cout<<d<<endl;
  

  //cout<<c+d<<endl;

  int e=c+d;



  int p=(1000-b*4);

 // cout<<p<<endl;
  int q=(500-(a+b)*2);
 // cout<<q<<endl;

 // cout<<p+q<<endl;

  int f=p+q;

if(e>f){


    cout<<(c+d)<<endl;
}
else if(e==f){

    cout<<e<<endl;
}
else{

    cout<<(p+q)<<endl;
}


}
   return 0;
 }