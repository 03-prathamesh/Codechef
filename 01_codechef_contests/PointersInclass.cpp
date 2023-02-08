#include <iostream>
using namespace std;

class Fruit
{

private:
  string colour;
  int price;

public:
  
   void setData(string a ,int b){

     colour=a;
     price=b;
   }

   void getdata(){

     cout<<"Colour of Fruit is: "<<colour<<endl;
     cout<<"Price of Fruit is: "<<price<<endl;
   }
  
};
int main()
{

  //  Fruit c1;

  //  c1.setData("Guava",30);
  //  c1.getdata();

  // Fruit c1;
  // Fruit  *ptr= & c1;
  
  // (*ptr).setData("Guava",30);
  // (*ptr).getdata();

// Fruit c1;
//   Fruit  *ptr= new Fruit[3];
  
  
//   ptr->setData("Guava",30);
//   ptr->getdata();
   
//  (ptr+1)->setData("Mango",50);
//  (ptr+1)->getdata();

//  (ptr+2)->setData("Pineapple",80);
//  (ptr+2)->getdata();

string x;
int y;



 for(int i=0;i<3;i++){
// string x;  //scope of this var remains only inside for loop . so we can not access this variables outside the for loop30
// int y;

  cout<<"Enter the name of Fruit=";
  cin>>x;

  cout<<"Enter the price of Fruit=";
  cin>>y;

  


 }
 
 // below is exactly same as this
  Fruit  *ptr= new Fruit[3];
  

  for(int i=0;i<3;i++){
  ptr->setData(x,y);
  ptr->getdata();
   
 ptr++;
  }
 

  return 0;
}