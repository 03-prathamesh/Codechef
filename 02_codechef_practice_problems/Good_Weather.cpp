#include <iostream>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        const int a = 7;

        int arr[a];

        for (int i = 0; i < a; i++)
        {

            cin >> arr[i];
        }

        int sunny = 0;
        int rainy = 0;

        for (int j = 0; j < a; j++)
        {

            if (arr[j] == 1)
            {

                sunny++;
            }

            else 
            {

                rainy++;
            }
        }

        if (sunny > rainy)
        {

            cout << "YES" << endl;
        }
        else 
        {

            cout << "NO" << endl;
        }
    }

    return 0;
}