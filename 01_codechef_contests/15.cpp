#include<iostream>
using namespace std;

int main()
{


int t;
cin>>t;


while(t--){


   int x;
   cin>>x;

 
  if(x<=10){

      cout<<1<<endl;
  }
  else if(x>10 && x<=20){

      cout<<2<<endl;
  }

  else if(x>20 && x<=30){

      cout<<3<<endl;
  }

  else if(x>30 && x<=40){

      cout<<4<<endl;
  }
  
  else if(x>40 && x<=50){

      cout<<5<<endl;
  }
   else if (x>50 && x<=60){

       cout<<6<<endl;
   }

   else if(x>60 && x<=70){

       cout<<7<<endl;
   }

    else if(x>70 && x<=80){

        cout<<8<<endl;
    }

    else if(x>80 && x<=90){


        cout<<9<<endl;
    }

    else if(x>90 && x<=100){

        cout<<10<<endl;
    }

    else {

        cout<<x/5*10<<endl;
    }


}
   return 0;
 }