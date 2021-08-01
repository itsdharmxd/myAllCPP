#include <iostream>
#include <string>
#include<cstdio>
#include<unordered_map>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif

    int t;

    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string arr_str[n];
        unordered_map<string, int> mp;
        for (int i = 0; i < n;i++){
           cin>> arr_str[i];
           mp[arr_str[i]] = 1;
        }
        int ans=0;
        for (int i = 0; i < n-1;i++){
            for (int j = i+1; j < n;j++){
             if(arr_str[i][0]==arr_str[j][0]){
                  
             }else {
             //    cout << arr_str[i] << " " << arr_str[j]<<" 1 ";
                 char te = arr_str[i][0];
                 arr_str[i][0] = arr_str[j][0];
                 arr_str[j][0] = te;
            //     cout << arr_str[i] << " " << arr_str[j] << " 2 ";

                 if(mp[arr_str[i]]||mp[arr_str[j]]){
                 }else{
                     ans += 2;
                 }
             //    cout << arr_str[i] << " " << arr_str[j] << " 3 ";

                 char tu = arr_str[i][0];
                 arr_str[i][0] = arr_str[j][0];
                 arr_str[j][0] = tu;
             //    cout << arr_str[i] << " " << arr_str[j] << " 4 ";
             //    cout << endl;
             }
                
            }
        }
        cout << ans << endl;
    }
    
}