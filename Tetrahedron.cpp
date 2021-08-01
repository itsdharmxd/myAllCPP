
#include <bits/stdc++.h>
using namespace std;
// #define mod 1000000007
// #define ll long long
// void multiply(ll A[3][3], ll B[3][3])
// {
//     ll res[3][3];
//     for (ll i = 0; i < 3; i++)
//     {
//         for (ll j = 0; j < 3; j++)
//         {
//             res[i][j] = 0;
//             for (ll k = 0; k < 3; k++)
//             {
//                 res[i][j] = ((res[i][j] % mod + (A[i][k] * B[k][j]) % mod)) % mod;
//             }
//         }
//     }
//     for (ll i = 0; i < 3; i++)
//     {
//         for (ll j = 0; j < 3; j++)
//         {
//             A[i][j] = res[i][j];
//         }
//     }
// }
// ll binary_expo(ll A[3][3], ll n)
// {
//     ll res[3][3] = {{0, 1, 1}, {1, 0, 0}, {1, 1, 0}};

//     while (n)
//     {
//         if (n & 1)
//             multiply(res, A);
//         multiply(A, A);
//         n >>= 1;
//     }
//     //   for (ll j = 0; j < 3; ++j)
//     //   {

//     //       for (ll k = 0; k < 3; ++k)
//     //       {
//     //           cout << res[j][k] << " ";
//     //       }
//     //       cout << endl;
//     //   }

//     return (res[0][1]) % mod;
// }
#define mod 1000000007
#define ll long long
int main()
{
    //freopen("input.txt", "r", stdin);
    ll n;
    cin >> n;
    ll dp[4][n+1]; 
    dp[0][0]=0;
    dp[1][0] = 0;
    dp[2][0] = 0;
    dp[3][0] = 1;

    for (ll i = 1; i <= n;i++){
       
        dp[0][i] = (dp[1][i - 1]  + dp[3][i - 1]  + dp[2][i - 1] ) % mod;
        dp[1][i] = (dp[0][i - 1]  + dp[3][i - 1]  + dp[2][i - 1] ) % mod;
        dp[2][i] = (dp[0][i - 1]  + dp[1][i - 1]  + dp[3][i - 1]  ) % mod;
        dp[3][i] = (dp[0][i - 1]  + dp[1][i - 1]   + dp[2][i - 1] ) % mod;
    }
    cout << dp[3][n];
}
