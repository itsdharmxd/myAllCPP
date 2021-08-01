#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define po2(z) 1 << (ll)z
#define fr(i, x, n) for (ll i = (ll)(x); i < (ll)(n); ++i)
#define rf(i, x, n) for (ll i = (ll)(x); i >= (ll)(n); --i)
#define modinv(x) powah(x, mod - 2)
#define ncr(n, r) (((fact[n] * modinv(fact[n - r])) % mod * modinv(fact[r])) % mod)
#define factorial \
    fact.pb(1);   \
    sidha(i, 1, MAX) fact.pb((fact[i - 1] * i) % mod)
#define TC       \
    ll test;     \
    cin >> test; \
    while (test--)
#define tej                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define mod (ll)1000000007
#define MAX 100005
#define pb push_back

void iterscycle(vector<ll> iters1, vector<ll> iters2)
{
    cout << iters1[0] << " " << iters2[1] << " " << iters1[1] << endl;
    cout << iters2[0] << " " << iters2[1] << " " << iters1[1] << endl;
}

int main()
{
    tej;
    TC
    {
        ll n, k;
        vector<ll> temp;
        cin >> n >> k;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        bool mk[n] = {0};
        vector<vector<ll>> iters, itersno2;
        for (ll i = 0; i < n; i++)
        {
            temp.clear();
            ll j = i;
            while (!mk[j])
            {
                temp.pb(j + 1);
                mk[j] = 1;
                j = arr[j] - 1;
            }
            if (!temp.empty())
            {
                iters.pb(temp);
            }
        }
        ll cnt = 0;
        for (ll i = 0; i < iters.size(); i++)
        {
            temp.clear();
            cnt = cnt + (iters[i].size() - 1) / 2;

            if ((iters[i].size() % 2) == 0)
            {
                temp.pb(iters[i][1]);
                temp.pb(iters[i][0]);
                itersno2.pb(temp);
            }
        }
        cnt += itersno2.size();

        if (itersno2.size() % 2 || cnt > k)
            cout << -1 << endl;
        else
        {
            cout << cnt << endl;
            for (ll i = 0; i < iters.size(); i++)
            {
                for (ll j = iters[i].size() - 1; j - 2 >= 0; j = j - 2)
                {
                    cout << iters[i][j - 2] << " " << iters[i][j - 1] << " " << iters[i][j] << endl;
                }
            }
            for (ll i = 0; i < itersno2.size(); i = i + 2)
            {
                iterscycle(itersno2[i], itersno2[i + 1]);
            }
        }
    }
}
