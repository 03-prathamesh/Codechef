#include<iostream>
using namespace std;

int main()
{

int t;
cin>>t;

while(t--){

  int a[3];
  for(int i=0;i<3;i++){

      cin>>a[i];
  }



  int b[3];
   for(int j=0;j<3;j++){

       cin>>b[j];
   }

int c1=0;
int c2=0;

  for(int p=0;p<3;p++){

   if(a[p]==1){

      c1++;
   }

   if(b[p]==1){

       c2++;
   }




  }

  if(c1==c2){

      cout<<"Pass"<<endl;
  }
  else{

      cout<<"Fail"<<endl;
  }


}
   return 0;
 }