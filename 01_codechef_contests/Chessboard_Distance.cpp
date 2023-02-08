#include <iostream>
#include <cmath>
using namespace std;

int main()
{

  int t;
  cin >> t;

  while (t--)
  {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    // int c=(x1-x2);

    // int d=(y1-y2);

    // cout<<e<<endl;

    //cout << max(x1, x2);
    // int x;
    // if (x2 > x1)
    // {

    //   // int x;
    //   x = (x2 - x1);
    //   // cout<<c<<endl;
    // }
    // else if (x2 < x1)
    // {

    //   // int c//;
    //   x = (x1 - x2);
    //   // cout<<c<<endl;
    // }

    // // cout << max(y1, y2);
    // int y;
    // if (y2 > y1)
    // {

    //   // int d;
    //   y = (y2 - y1);
    //   // cout<<d<<endl;
    // }
    // else if (y2 < y1)
    // {

    //   // int d;
    //   d = (y1 - y2);
    //   // cout<<d<<endl;
    // }

    // int p=max(c,d);
    // int e;
    // e = max(c, d);

     int x = abs(x1-x2);
     int y = abs(y1-y2);

    cout<<max(x, y)<<"\n";
  }
  return 0;
}