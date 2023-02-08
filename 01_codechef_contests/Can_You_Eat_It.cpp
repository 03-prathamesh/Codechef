#include<iostream>
using namespace std;

int main()
{

int t;
cin>>t;


while(t--){



int n,k;
cin>>n>>k;


if((n%k)==0){

    cout<<n/k<<endl;
}
else if((n%k)!=0){

    cout<<-1<<endl;
}
else{

    cout<<0<<endl;
}




}
   return 0;
 }