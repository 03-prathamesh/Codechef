#include<iostream>
using namespace std;

int main()
{



int t;
cin>>t;


 while(t--){



     int n,x,p;   //  noof problems //x =corect ans (3 marks) //p=passing no
     cin>>n>>x>>p;

    if((x*3)-(n-x)>=p){

        cout<<"PASS"<<endl;
    }
  
    else{

        cout<<"FAIL"<<endl;
    }

     
 }

   return 0;
 }