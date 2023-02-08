#include<iostream>
using namespace std;

int main()
{
    
    int t;
    cin>>t;


while(t--){

 int a,b,c;
 cin>>a>>b>>c;

int p;

   if((a+b)%2==0){

        p=(a+b)/2;
   }
   else{

    p=((a+b)/2)+1;
   }


   if(p>c){
      cout<<"YES"<<endl;
   } 
   else{

    cout<<"NO"<<endl;
   }






}




   return 0;
}