#include <iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while (t--)
    {

        int x, y, z;
        cin >> x >> y >> z;

        if (z < x && z < y)
        {
            cout << "Alice" << endl;
        }
        else if (y < x && y < z)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Draw" << endl;
        }
    }

    // int t;
    // cin>>t;
    // while(t--)
    // {
    //     int a, b,c;
    //     cin>>a>>b>>c;

    //     if(b>c && a>c)
    //     {
    //         cout<<"Alice"<<"\n";
    //     }
    //     else if(c> b && a>b)
    //     {
    //         cout<<"Bob"<<"\n";
    //     }
    //     else
    //     {
    //         cout<<"Draw"<<"\n";
    //     }
    // }
    return 0;
}