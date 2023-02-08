#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;


 while(t--)
{

int a,b,c;
cin>>a>>b>>c;

  int p=(b+c)/2;
  int q=(a+c)/2;
  int r=(a+b)/2;


  if((a>b &&  a>c)  ){

          if(p<35){

            cout<<"Fail"<<endl;
          }
          else{

            cout<<"Pass"<<endl;
          }
       

  }
  else if((b>c &&  b>a) ){


     if(q<35){

        cout<<"Fail"<<endl;
     }
     else{

        cout<<"Pass"<<endl;
     }


  }
  else{


    if(r<35){

        cout<<"Fail"<<endl;
    }
    else{


        cout<<"Pass"<<endl;
    }
  }





}



   return 0;
}