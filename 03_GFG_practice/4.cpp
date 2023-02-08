
#include<bits/stdc++.h>
using namespace std;

class Solution{      
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        
        int sum=0;
        int gum=0;
        
       
            
         sum=n*(n+1)/2;
            
            
        
         for(int i=0;i<n-1;i++){
            
           gum=gum+array[i];
            
            
        }
        
        int j=sum-gum;
    
        return j;
    }
};
int main(){


   int t;
   cin>>t;

   while(t--){

      int n;
      cin>>n;

      vector<int>array(n-1);

      for(int i=0;i<n-1;i++){


        cin>>array[i];
      }
      
      Solution obj;
    cout<<obj.MissingNumber(array,n);


   }


return 0;

}
