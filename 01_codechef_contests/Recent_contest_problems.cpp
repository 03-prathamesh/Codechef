#include<iostream>
using namespace std;

int main()
{

int t;
cin>>t;

while(t--){


   int x;
   cin>>x;

  string arr;

//  for(int  i=0;i<x;i++){


//     cin>>arr;
//  }



//    for(int i=0;i<x;i++){


//          cin>>arr[x];

//    }

 int count=0;
 int dount=0;

   for(int i=0;i<x;i++){
       cin>>arr;

       if(arr=="START38"){

           count++;
       }

       if(arr=="LTIME108"){

          dount++;
       }
   }


cout<<count<<" "<<dount<<endl;

}
   return 0;
 }