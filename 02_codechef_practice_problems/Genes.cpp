#include<iostream>
using namespace std;

int main()
{

 


   char a,b;
   cin>>a>>b;


   if((a=='R' && b=='R') || (a=='R'&& b=='B')||(a=='R' && b=='G')||(a=='B'&& b=='R')||(a=='G'&& b=='R')){

       cout<<"R"<<endl;
   }
   else if((a=='B' && b=='B') || (a=='B'&& b=='G') || (a=='G'&& b=='B')){

     cout<<"B"<<endl;

   }    

   else if(a=='G'&& b=='G'){
       cout<<"G"<<endl;
   }

 
    
    // char c1, c2;
    // cin>>c1>>c2;

    // if(c1 == 'R' || c2 == 'R')
    // {
    //     cout<<"R"<<"\n";
    // }
    // else if(c1 == 'B' || c2 == 'B')
    // {
    //     cout<<"B"<<"\n";
    // }
    // else 
    // {
    //     cout<<"g"<<"\n";
    // }

    // (c1 == 'R' || c2 == 'R')?cout<<"R\n":(c1=='B'|| c2 == 'B')?cout<<"B\n":cout<<"G\n";

   return 0;
 }