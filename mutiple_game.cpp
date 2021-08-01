#include <iostream>
#include <string>
#include <cstdio>
#include<map>
using namespace std;

int main()
{
    cout << "dharmesh";

    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);

// #endif
    int t;
    cin >> t;
    while(t--){

        int n, q, m;
        cin >> n>>q>> m;
        int arr[n];
        for (int i = 0; i < n;i++)
            cin >> arr[i];
        int arr1[1000001] = {};
        int res[m + 1] = {};
        map<pair<int, int>, int> map;

        while (q--)
        {
            int li, ri;
            cin >> li >> ri;
            li--;
            ri--;
            if(arr[li]>m){
                continue;
            }else if(arr[li]<=m&&arr[ri]>m){

                arr1[arr[li]]++;
                arr1[m + 1]--;
                map[{arr[li], arr[ri]}]++; 

            }

           for(auto it:map){
               int a = it.first.first;
               int b = it.first.second;
               int c = it.second;

               arr1[b + a] -= 1;
               arr1[b + 2 * a] += 1;
               int d = b + 2 * a;

               while (d+a<=m)
               {

                   d += b;
                   arr1[d] -= 1;
                   arr1[d + a] += 1;
                   d += a;
               }


               

           }

           for (int i = 1; i <= m;i++){
               arr1[i] += arr1[i - 1];
               cout << arr1[i] << " ";
           }
        }
        

    }
}