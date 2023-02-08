#include<iostream>
#include<cmath>
using namespace std;

int main()
{


 int t;
 cin>>t;

 while(t--){


   int a,b,c;
   cin>>a>>b>>c;



//    if((a+b)>=(b+c)  && (a+b)>=(a+c)){

//        cout<<(a+b)<<endl;
//    }
//    else if((b+c)>=(a+b) && (b+c)>=(a+c)){

//        cout<<(b+c)<<endl;
//    }
//    else if((a+c)>=(a+b) && (a+c)>=(b+c)){

//        cout<<(a+c)<<endl;
//    }

 cout<<a+b+c-min(b,min(a,c))<<endl;




 }


 return 0;
   
 }