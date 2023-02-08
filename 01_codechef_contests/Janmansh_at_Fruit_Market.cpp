#include<iostream>

using namespace std;

int main()
{

int t;
cin>>t;

 while(t--){


 int x,a,b,c;   //x=No.of fruits to buy.
 cin>>x>>a>>b>>c;


 switch(x){




 case 1:
     cout<<a<<endl;
     break;


 
 
 case 2:
    

      cout<<a+b<<endl;
      break;
  


  case 3:
       

       if(a>=b && a>=c && b>=c){

           cout<<b+c+c<<endl;

       }

       else if(b>=a && b>=c && a>=c){

             cout<<a+c+c<<endl;
       }
       else if(c>=a && c>=b  && a>=b){

           cout<<a+b+b<<endl;
       }
         
   
 }
 }
   return 0;
 }