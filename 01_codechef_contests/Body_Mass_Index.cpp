#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int m, h;
        cin >> m >> h;

        int k = m / (h * h);

        if (k <= 18)
        {

            cout << 1 << endl; // underweight
        }
   else if(k>=19 &&  (k<=24)){
            cout << 2 << endl; // normal weight
   }
   else if((k>=25) && (k<=29)){
            cout << 3 << endl; // overweight
   }
   else if(k>=30){
            cout << 4 << endl; // obesity
   }


    }

    return 0;
}