#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
       //cout<<"Enter the size of array: "<<endl;
        int n;
        cin >> n;

        int a[n];

        for (int p = 0; p < n; p++)
        {

            cin >> a[p];
        }

   int c=sizeof(a) / sizeof(a[0]);

       for(int j=0;j<n;j++){

           if(a[j]==a[j+1]){

               c--;

               cout<<c<<endl;
               break;
           }

           else{

               cout<<c<<endl;
               break;
           }
       }
        
    }

    return 0;
}