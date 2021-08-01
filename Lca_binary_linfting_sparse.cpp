
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(a, b, c) for (ll a = b; a < c; a++)
#define repr(a, b, c) for (ll a = b; a >= c; a--)
#define fst first
#define snd second
#define all(c) ((c).begin()), ((c).end())
#define test()                        \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define fast()                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define N 1e5 + 10

vector<int> tree[1000];
vector<int> depth(1000,0);
int parent[1000][15];


void dfs(int curr,int par){
    depth[curr] = depth[par] + 1;
    parent[curr][0] = par;

    for (int i = 0; i < tree[curr].size();i++){

         if(tree[curr][i]!=par)
             dfs(tree[curr][i], curr);

    }
}

void precomputeSparseMatrix(int n){

    for (int i = 1; i < 15;i++){

        for (int node = 1; node <= n; node++)
        {
            if(parent[node][i-1]!= -1){
                parent[node][i] = parent[parent[node][i-1]][i - 1];
            }

        }
    }
}

void addEdge(int u,int v){

    tree[u].push_back(v);
    tree[v].push_back(u);

}
int lca(int u,int v){

      if(depth[u]<depth[v])
          swap(u, v);
      int diff = depth[u] - depth[v];

      for (int i=0; i < 15;i++)
      if((diff>>i)&1)
          u = parent[u][i];

    if(u==v)
        return u;

    for (int i = 14; i >= 0;i--){
        if(parent[u][i]!=parent[v][i]){
            u = parent[u][i];
            v = parent[v][i];
        }
    }
    return parent[u][0];
}


int solve()
{
    memset(parent, -1, sizeof(parent));
    int n = 8;

    addEdge(1, 2);
    addEdge(1, 3);
    addEdge(2, 4);
    addEdge(2, 5);
    addEdge(2, 6);
    addEdge(3, 7);
    addEdge(3, 8);

    depth[0] = 0;

    dfs(1, 0);
    precomputeSparseMatrix(n);


    cout<<lca(4,7)<<endl;
    cout << lca(2, 6) << endl;

    return 0;
}

int main()
{
#ifndef ONLINE_JUDGE
   // test()
#endif // !ONLINE_JUDGE
        int t = 1;
    //cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}