#include<iostream>
using namespace std;

int main()
{

int t;
cin>>t;


while(t--){



    int x,y;    // x for car &  y for bike
    cin>>x>>y;

    if(x>y){
        cout<<"CAR"<<endl;
    }

    else if(x<y){

        cout<<"BIKE"<<endl;
    }
    else{

        cout<<"SAME"<<endl;
    }

}
   return 0;
 }