#include<iostream>
#include<cmath>
using namespace std;

int main()
{


int t;
cin>>t;


while(t--){

 int n;
 cin>>n;
int sum=0;

  if(n%5==0){

      sum=n/10;
     if(n%10==5){

         sum=sum+1;

     }

     cout<<sum<<endl;
}
  else{

      cout<<-1<<endl;
  }

}
   return 0;
 }