#include<iostream>
using namespace std;

int main()
{
    
 int t;
 cin>>t;



 while(t--){

  

    int n;
    cin>>n;
    if(n<=1)
    {
        cout<<"0"<<endl;
    }
    else if(n==2){
        cout<<"2"<<endl;
    }
    else{
        int ans = 2;
        int loop = n-2;
        for(int  i = 0;i<loop;i++)
        {
            ans*=2;
        }
        cout<<ans<<endl;
    }

 }


   return 0;
}