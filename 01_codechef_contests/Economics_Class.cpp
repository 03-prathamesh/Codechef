#include <iostream>
using namespace std;

int main()
{

    int t;
   // cout<<"Enter t: "<<endl;
    cin >> t;

  

    while (t--)
    {


          int sum=0;

        int n; // size of array
       // cout<<"Enter size of  array: "<<endl;
        cin >> n;



        int a[n];
        int b[n];

        for (int i = 0; i < n; i++)
        {

           //cout<<"Enter elements to a: ";
            cin >> a[i];
           
        }
        //  cout<<endl;
        for (int i = 0; i < n; i++)
        {
            
            //cout<<"Enter elements to B: ";
            cin >> b[i];
           
        }

        for (int p = 0; p < n;p++)
        {

            if ((a[p] == b[p]))
            {

                sum++;
            }
        }

        cout<<sum<<endl;
    }
    return 0;
}