#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(a, b, c) for (ll a = b; a < c; a++)



int main()
{

#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif // !ONLINE_JUDGE

    int t;
    cin >> t;
    while (t--)
    {
        int n, m, l;
        cin >> n >> m >> l;
        string path,node_val;
        cin >> path >> node_val;
        vector<int> graph[n],u(n),v(n);
        REP(i, 0, m)
            cin >> u[i];
        REP(i, 0, m)
            cin >> v[i];
    REP(i,0,m){

        graph[u[i]].push_back(v[i]);
        graph[v[i]].push_back(u[i]);
    }

    

      

        

    }
}