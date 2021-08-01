
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(a, b, c) for (ll a = b; a < c; a++)
#define repr(a, b, c) for (ll a = b; a >= c; a--)
#define fst first
#define snd second
#define pb push_back
#define pii pair<ll, ll>
#define vi vector<ll>
#define all(c) ((c).begin()), ((c).end())
#define test()                        \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define fast()                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define LOG2(X) ((unsigned)(8 * sizeof(unsigned long long) - __builtin_clzll((unsigned long long)(X)) - 1))

//const int N = 1e5 + 5;
//const int INF = 0;
struct my_node
{
    ll sum = INT_MAX;
    //	ll freq = 0;
    my_node() {}
    my_node(ll val) // for leaf of segment tree
    {
        sum = val;
        //		freq = 1;
    }
    void merge(const my_node &l, const my_node &r)
    {

        // store the thing you wanna query

        sum = min(l.sum, r.sum);
        //	freq = 0;
        // if min(l.v,r.v);
        // 	if(l.sum==sum)
        // 		freq += l.freq;
        //    if(r.sum==sum)
        // 	   freq += r.freq;
    }
};

struct my_update
{
    ll v = 0; // 4

    my_update() {}
    my_update(int val)
    {
        v = val; // 5
    }
    // combine the current my_update with the other my_update (see keynotes)
    void combine(my_update &other, const int32_t &tl, const int32_t &tr)
    {

        v += other.v; // 6
                      // min(v,other,v);
                      // you can be sure that the "other" is newer than current
    }
    // store the correct information in the my_node x
    void apply(my_node &x, const int32_t &tl, const int32_t &tr)
    {
        x.sum += v;
        //	x.sum = (tr - tl + 1) * v;
        //x.sum =  v; //7
    }
};

template <typename node, typename update>
struct segtree
{
    int len;
    vector<node> t;
    vector<update> u;
    vector<bool> lazy;
    node identity_element;
    update identity_transformation;
    segtree(int l)
    {
        len = l;
        t.resize(4 * len);
        u.resize(4 * len);
        lazy.resize(4 * len);
        identity_element = node();
        identity_transformation = update();
    }

    void pushdown(const int32_t &v, const int32_t &tl, const int32_t &tr)
    {
        if (!lazy[v])
            return;
        int32_t tm = (tl + tr) >> 1;
        apply(v << 1, tl, tm, u[v]);
        apply(v << 1 | 1, tm + 1, tr, u[v]);
        u[v] = identity_transformation;
        lazy[v] = 0;
    }

    void apply(const int32_t &v, const int32_t &tl, const int32_t &tr, update upd)
    {
        if (tl != tr)
        {
            lazy[v] = 1;
            u[v].combine(upd, tl, tr);
        }
        upd.apply(t[v], tl, tr);
    }

    template <typename T>
    void build(const T &arr, const int32_t &v, const int32_t &tl, const int32_t &tr)
    {
        if (tl == tr)
        {
            t[v] = arr[tl];
            return;
        }
        int32_t tm = (tl + tr) >> 1;
        build(arr, v << 1, tl, tm);
        build(arr, v << 1 | 1, tm + 1, tr);
        t[v].merge(t[v << 1], t[v << 1 | 1]);
    }

    node query(const int32_t &v, const int32_t &tl, const int32_t &tr, const int32_t &l, const int32_t &r)
    {
        if (l > tr || r < tl)
        {
            return identity_element;
        }
        if (tl >= l && tr <= r)
        {
            return t[v];
        }
        pushdown(v, tl, tr);
        int32_t tm = (tl + tr) >> 1;
        node a = query(v << 1, tl, tm, l, r), b = query(v << 1 | 1, tm + 1, tr, l, r), ans;
        ans.merge(a, b);
        return ans;
    }

    // rupd = range update
    void rupd(const int32_t &v, const int32_t &tl, const int32_t &tr, const int32_t &l, const int32_t &r, const update &upd)
    {
        if (l > tr || r < tl)
        {
            return;
        }
        if (tl >= l && tr <= r)
        {
            apply(v, tl, tr, upd);
            return;
        }
        pushdown(v, tl, tr);
        int32_t tm = (tl + tr) >> 1;
        rupd(v << 1, tl, tm, l, r, upd);
        rupd(v << 1 | 1, tm + 1, tr, l, r, upd);
        t[v].merge(t[v << 1], t[v << 1 | 1]);
    }

public:
    template <typename T>
    void build(const T &arr)
    {
        build(arr, 1, 0, len - 1);
    }
    node query(const int32_t &l, const int32_t &r)
    {
        return query(1, 0, len - 1, l, r);
    }
    void rupd(const int32_t &l, const int32_t &r, const update &upd)
    {
        rupd(1, 0, len - 1, l, r, upd);
    }
};

int solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n, 0);
    // rep(i,0,n){
    // 	cin >> a[i];
    // }
    segtree<my_node, my_update> t(n);

    t.build(a);

    rep(iiii, 0, m)
    {

        int type;
        cin >> type;
        if (type == 1)
        {
            ll l, r, v;
            cin >> l >> r >> v;
            r--;
            t.rupd(l, r, v);
        }
        else
        {
            ll l;
            cin >> l;

            auto res = t.query(l, l).sum;
            cout << res << endl;
            //cout << res.sum << " " << res.freq << endl;
        }
    }

    return 0;
}

int main()
{
#ifndef ONLINE_JUDGE
    test()
#endif // !ONLINE_JUDGE
        int t = 1;
    //cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}