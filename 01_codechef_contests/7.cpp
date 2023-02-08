#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int j = 0; j < t; j++)
    {

        int p1;
        cin >> p1;

        int p2;
        cin >> p2;

        int p3;
        cin >> p3;

        if (p1 < p2 && p2 < p3)
        {

            cout << p3 + p1 << endl;
        }
        else if (p1 < p2 && p2 > p3)
        {

            cout << p2 << endl;
        }
        else if (p1 == p2 && p2 == p3)
        {

            cout << p3 + p1 << endl;
        }
    }
    return 0;
}