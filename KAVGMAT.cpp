#include <bits/stdc++.h>

#define needforspeed                  \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define ll long long

using namespace std;

ll dharmesh()

{

    ll n, m, k, ans = 0;

    cin >> n >> m >> k;

    ll temp = 0;

    ll a[n][m], sum[n][m] = {0};

    for (ll z = 0; z < n; z++)

    {

        for (ll y = 0; y < m; y++)

        {

            cin >> a[z][y];

            if (y > 0)
                sum[z][y] = a[z][y] + sum[z][y - 1];

            else
                sum[z][y] = a[z][y];

            if (a[z][y] >= k)

            {

                ans++;
            }
        }
    }

    for (ll z = 0; z < m; z++)

    {

        for (ll y = 1; y < n; y++)

        {

            sum[y][z] += sum[y - 1][z];
        }
    }

    for (ll z = 2; z <= min(m, n); z++)

    {

        for (ll y = z - 1; y < n; y++)

        {

            ll tt[m] = {0};

            for (ll x = 0; x < m; x++)

            {

                if (x - z >= 0 && y - z < 0)
                    tt[x] = sum[y][x] - sum[y][x - z];

                else if (y - z >= 0 && x - z < 0)
                    tt[x] = sum[y][x] - sum[y - z][x];

                else if (x - z >= 0 && y - z >= 0)
                    tt[x] = sum[y][x] + sum[y - z][x - z] - sum[y][x - z] - sum[y - z][x];

                else if (x - z < 0 && y - z < 0)
                    tt[x] = sum[y][x];
            }

            ans += m - (lower_bound(tt + z - 1, tt + m, z * z * k) - tt);
        }
    }

    return ans;
}

int main()

{

    needforspeed;

    ll t;

    cin >> t;

    while (t--)

    {

        cout << dharmesh() << endl;
    }

    return 0;
}
