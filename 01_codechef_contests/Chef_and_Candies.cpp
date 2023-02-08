#include<bits/stdc++.h>
using namespace std;

int main()
{
    

    int  t;
    cin>>t;


    while(t--){


        int n,x;
        cin>>n>>x;


        int  y=n-x;


        if(x>=n){

            cout<<0<<endl;
        }
        else{

                 if((y%4)==0)  {

                    cout<<(y/4)<<endl;
                 } 
                 else{

                    cout<<(y/4)+1<<endl;
                 }
              


        }



    }





   return 0;
}