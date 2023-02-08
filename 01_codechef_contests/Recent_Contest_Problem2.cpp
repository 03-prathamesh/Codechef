#include<bits/stdc++.h>

using namespace std;

int main()
{
    
 int  t;
 cin>>t;


 while(t--){
 
  int n;
  cout<<"enter the size of the vector"<<endl;
  cin>>n;



   vector<string>v;

   for(int i=0;i<n;i++)
{


    string  x;
    cin>>x;

    v.push_back(x);



}


 int  count=0;

 for(int i=0;i<n;i++){


     if(v[i]=="PRATHAMESH"){

         count++;
     }
 }

cout<<"THe value of couunt is: "<<count<<endl;

 }




   return 0;
}