#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
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
        int arr[n],max=0 ;
        for (int i = 0; i < n;i++)
          {cin >> arr[i];
           if(max<arr[i])
               max = arr[i];
          }
          int sum = 0;
          for (int i = 0; i < n; i++)
          {
              if (max > arr[i])
                  sum = sum + (max - arr[i]);
          }
          if(sum%2==1)
              cout << "First\n";
              else
                  cout << "Second\n";
    }
    return 0;
}