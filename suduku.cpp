#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define rep(a, b, c) for (ll a = b; a < c; a++)
#define repr(a, b, c) for (ll a = b; a >= c; a--)

#define all(c) ((c).begin()), ((c).end())
#define test()                        \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define fast()                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define LOG2(X) ((unsigned)(8 * sizeof(unsigned long long) - __builtin_clzll((unsigned long long)(X)) - 1))
const ll mod = 1e9 + 7;
void p();
int grid[9][9] = {
    {3, 0, 6, 5, 0, 8, 4, 0, 0},
    {5, 2, 0, 0, 0, 0, 0, 0, 0},
    {0, 8, 7, 0, 0, 0, 0, 3, 1},
    {0, 0, 3, 0, 1, 0, 0, 8, 0},
    {9, 0, 0, 8, 6, 3, 0, 0, 5},
    {0, 5, 0, 0, 9, 0, 6, 0, 0},
    {1, 3, 0, 0, 0, 0, 2, 5, 0},
    {0, 0, 0, 0, 0, 0, 0, 7, 4},
    {0, 0, 5, 2, 0, 6, 3, 0, 0}

};
bool isvalid(int i, int j, int po)
{
    rep(v, 0, 9)
    {
        if (grid[i][v] == po)
        {
            return false;
        }
    }
    rep(v, 0, 9)
    {
        if (grid[v][j] == po)
        {
            return false;
        }
    }

    int is = (i / 3) * 3, js = (j / 3) * 3;

    rep(k, 0, 3)
    {
        rep(l, 0, 3)
        {
            if (grid[is + k][js + l] == po)
                return false;
        }
    }

    return true;
}
void suduku(int i, int j, int n)
{
    if (i == n - 1 && j == n)
        p();

    if (j >= n)
    {
        i++;
        j = 0;
    }

    if (grid[i][j] != 0)
    {
        suduku(i, j + 1, n);
    }
    else
    {

        rep(po, 1, 10)
        {
            if (isvalid(i, j, po))
            {
                grid[i][j] = po;
                suduku(i, j + 1, n);
                grid[i][j] = 0;
            }
        }
    }
}
void p()
{
    rep(i, 0, 9)
    {
        rep(j, 0, 9)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}
int solve()
{

    suduku(0, 0, 9);

    return 0;
}

int main()
{
    fast()
#ifndef ONLINE_JUDGE
//test()
#endif // !ONLINE_JUDGE
        int t = 1;
    // cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}