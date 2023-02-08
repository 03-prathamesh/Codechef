#include <iostream>
#include <algorithm>
using namespace std;

int MissArray(int a[], int n)
{

    int sum = 0;

    // sort(a, a + n);

    // for (int i = 0; i < n; i++)
    // {

    //     // int p = (a[n] - a[n - 1]);

    //     if (a[i] == i + 1)
    //     {

    //         sum++; //  
    //     }
    //     else
    //     {

    //         return ++sum;
    //     }
    // }



    int size=n*(n+1)/2;
   
    for(int i=0;i<n-1;i++){
        sum+=a[i];
    }    
  
   int z= size-sum;
  return z;

}

int main()
{

    int n = 7;

    int a[] = {1, 3, 2, 4, 6, 7};

    int c = MissArray(a, n);
    cout << c << endl;

    return 0;
}