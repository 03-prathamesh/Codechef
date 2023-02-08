#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int x, y;
        cin >> x >> y;

        int z = (x * y);
        int sum;

       if(z>=100){

           cout<<z/100<<endl;
       }
       else{

           cout<<0<<endl;
       }







    }
    return 0;
}