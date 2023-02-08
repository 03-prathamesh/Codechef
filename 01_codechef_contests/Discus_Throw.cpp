#include<iostream>
#include<cmath>
using namespace std;

int main()
{



int t;
cin>>t;


while(t--){


 int x,y,z;
 cin>>x>>y>>z;


  int m=fmax(x,y);

  int n=fmax(m,z);

 cout<<n<<endl;

}
   return 0;
 }