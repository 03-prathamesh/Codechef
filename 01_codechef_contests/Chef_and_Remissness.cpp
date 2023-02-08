#include<iostream>
#include<algorithm>
using namespace std;

int main()
{

int t;
cin>>t;


 for(int i=0;i<t;i++){


   int a,b;
   cin>>a>>b;


   int min=max(a,b);
   int max=(a+b);

   cout<<min<<" "<<max<<endl;




 }

 



   return 0;
 }