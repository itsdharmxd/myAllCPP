#include <iostream>
#include <string>
#include <cstdlib>
#include<vector>
#include <cmath>
#include <algorithm>
using namespace std;

vector<int> longest_incressing_sub_sequence(int arr[],int n){
    vector<int> dp(n);

    for (int i = 0; i < dp.size();i++)
        dp[i] = 1;

    for (int j = 1; j < dp.size();j++){
        for (int i = 0; i < j;i++){
            if(arr[j]>=arr[i]){
                dp[j] = max(dp[i] + 1,dp[j]);
            }
        }
    }
   
    return dp;
}

int main()
{
    int drr[] = {1, 2, 0, 4, 5};
    longest_incressing_sub_sequence(drr, 5);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
       int weight[n]={},length[n]={};
       for (int i = 0; i < n;i++)
           cin >> weight[i];
       for (int i = 0; i < n; i++)
           cin >> length[i];
       if (n == 2)
      {
           if(weight[0]<=weight[1]){
               cout << 0 << endl;
           }
           else if (weight[0] > weight[1]){
               if(length[0]==1){
                   cout << 2 << endl;
               }else{
                   cout << 1 << endl;
               }
           }
      }else if(n==3){

          vector<int> dp = longest_incressing_sub_sequence(weight, n);
          int mx = -1;
          for (int i = 0; i < n;i++)
              mx = max(mx, dp[i]);

          if (mx == 3){
              cout << 0 << endl;
          }else if(mx==2){
              
          }
          }   
      
      

    } 
  

}