#include <iostream>
using namespace std;

int main()
{

  int t;
  // cout<<"Enter the value  of t."<<endl;
  cin >> t;

  
  while (t--)
  {

    int n;
    int count = 0;

    // cout<<"Enter the value of size"<<endl;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {

      // cout<<"Enter elements to be added to this array"<<endl;
      cin >> arr[i];

      if (arr[i] >= 10 && arr[i] <= 60)
      {

        count++;
        //count=count+1;
      }

      
    }

   cout<<count<<endl;
  }
  return 0;
}