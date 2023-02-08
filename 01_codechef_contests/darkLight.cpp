#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, k;
        cin >> n >> k;

        if (n != 4 && n != 0 && k == 0)
        {

            cout << "On" << endl;
        }
        else if (n == 1 || n == 2 || n == 3 && k == 1)
        {

            cout << "Ambiguous" << endl;
        }
        else if (n == 0 && k == 1)
        {

            cout << "Off" << endl;
        }
    }

    return 0;
}