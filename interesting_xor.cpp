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
        ll n;
        cin >> n;
        ll sum = 0, k = 1;
        while (n >= sum)
        {
            sum = pow(2, k);
            k++;
        }
        ll j = pow(2, k - 2);
        ll v1 = sum - n;
        cout << j << " " << v1<<endl;
        ll fin_ans = (j - 1) * ((j - 1) + v1);
        cout << fin_ans << "\n";
    }
    return 0;
}