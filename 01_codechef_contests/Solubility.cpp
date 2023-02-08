#include<iostream>
using namespace std;

int main()
{

int t;
cin>>t;


 while(t--){


    int x,a,b;      // x= water temp , a=solubility of water , b=solubility of suger inn waterr increses(with increasse in temp of Water)
    cin>>x>>a>>b;


    cout<<(a+(100-x)*b)*10<<endl;



 }
   return 0;
 }