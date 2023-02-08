#include <iostream>
using namespace std;

int main()
{

   

    int n, h, x; // n special Hours time ,h=needs h hours to solve problem,x=hours left to end the contest

    cin >> n >> h >> x;

    //int arr[n];

    // for (int i = 0; i < n; i++)
    // {

    //     // cout<<"Enter The Values: ";
    //     cin >> arr[i];
    // }

    
int count=0;

//    for (int j = 0; j < n; j++)
//     {
        // for(int p=0;p<n;p++){
        // if (x + (arr[p]) >= h)
        // {

        //     cout << "YES" << endl;
        //     break;
        
        // }
        // }
        // if(0){}
        // else{

        //     cout<<"NO"<<endl;
        //     break;
        // }
       

    //    if(x+(arr[j])>=h){

    //        count=1;
    //        break;
    //    }
    //    else{

    //        count=0;
    //        break;
    //    }

    // }

    // if(count==1){


    //     cout<<"YES"<<endl;
    // }
    // else{

    //     cout<<"NO"<<endl;
    // }



//    

 int arr[n];

  for(int j=0;j<n;j++){


      cin>>arr[j];
  }

 for(int i=0;i<n;i++){


      if(x+(arr[i])>=h){

          count=1;
      }

 }




    // }

    if(count==1){

        cout<<"YES"<<endl;
    }
    else{

        cout<<"NO"<<endl;
    }

    
    return 0;
}