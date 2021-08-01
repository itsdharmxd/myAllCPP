#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif // !ONLINE_JUDGE

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n], brr[m];
        int a_sum = 0, b_sum = 0;
        for (int i = 0; i < n;i++)
       {     cin >> arr[i];
           a_sum += arr[i];
       }
        for (int i = 0; i < m;i++)
          {  cin >> brr[i];
              b_sum += brr[i];
          }
          if(a_sum>b_sum){
              cout << 0 << endl;
              continue;
          }
          sort(arr, arr + n);
          sort(brr, brr + m);
          reverse(brr, brr + m);
        //  for (int i = 0; i < n;i++)
        //        cout << arr[i]<<" ";
        //  cout<<endl;
        //  for (int i = 0; i < m; i++)
        //      cout << brr[i] << " ";
         int loop = min(m, n);
         int steps = 0;
         for (int i = 0; i < loop&&a_sum<=b_sum;i++){
             a_sum = a_sum - arr[i] + brr[i];
             b_sum = b_sum - brr[i] + arr[i];
             steps++;
           //  cout << steps<<"c";
         }
         if(a_sum<=b_sum)
             cout << -1 << endl;
             else
             {
                 cout << steps << endl;
             }
             
    }
}