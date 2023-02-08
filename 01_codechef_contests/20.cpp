#include<iostream>
#include<string>
using namespace std;



template<class T1, class T2>
class  myClass{

   private:

      T1 data1;
      T2 data2;

   public:
      
      myClass( T1 a, T1 b){

          data1=a;
          data2=b;

      }


      void display(){

          cout<<data1<<endl<<data2<<endl;
      }



};
int main()
{

 myClass < int , float > myc1(34,89.08);

myc1.display();
   return 0; 
 }