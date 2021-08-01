#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define REP(a, b, c) for (ll a = b; a < c;a++)


void dharmesh()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> g(n + 1);

    REP(i, 0, n)
        cin >> g[i + 1];

        vector < vector<pair<ll, ll>>> arr(n + 1), dp(n + 1);
REP(i,0,m){
    ll u, v, d;
    cin >> u >> v >> d;
    arr[u].push_back(make_pair(i, d));
    arr[v].push_back(make_pair(i, d));

}

dp[0].push_back(make_pair(0, 0));

REP(i,1,n+1){
    vector<pair<ll, ll>> temp;
    temp.insert(temp.end(), dp[i - 1].begin(), dp[i - 1].end());

    ll curr = 0,mask=0;
    set<ll> open;
    for (ll j = i; j >= 1;j--){
        curr += g[j];
        mask ^= 1LL << j;
        for(auto xyz:arr[j]){
           if(open.count(xyz.first))
               curr += xyz.second;
               else
                   open.insert(xyz.first);

        }
         if(j>1)
         for(auto xyzj:dp[j-2])
             temp.push_back(make_pair(xyzj.first + curr, mask ^ xyzj.second));
        else
            temp.push_back(make_pair(curr, mask));     
    

    }
    sort(temp.begin(), temp.end());
    reverse(temp.begin(), temp.end());
    set<ll> sel;
    ll filled = 0;

    for (ll j = 0; j < temp.size() && filled < k;j++){
          if(sel.count(temp[j].second))
              continue;
          dp[i].push_back(temp[j]);
          filled++;
          sel.insert(temp[j].second);
    }
}
for (ll i = 0; i < k; i++)
    cout << dp[n][i].first << " ";
cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE

    int t;
    cin >> t;

    while (t--)
    {
        dharmesh();
    }
}