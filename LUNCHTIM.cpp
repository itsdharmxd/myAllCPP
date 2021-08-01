#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(a, b, c) for (ll a = b; a < c; a++)


vector<ll> next_great_left(vector<ll> arr){

    stack<pair<ll, ll>> stk;
    vector<ll> ans(arr.size(),0);
    stk.push({0, 0});

    REP(i,1,arr.size()){
        while (!stk.empty() && (arr[i] > arr[stk.top().first]))
            stk.pop();

if(!stk.empty())
   if(arr[stk.top().first]==arr[i] ){
       ans[i] = ans[stk.top().first] + 1;
   }
   stk.push({i, 0});     

    }

    return ans;

}
vector<ll> next_great_right(vector<ll> arr)
{
    ll n = arr.size();
    stack<pair<ll, ll>> stk;
    vector<ll> ans(arr.size(), 0);
    stk.push({n-1, 0});

    for (int i = n - 2; i >= 0;i--)
    {
        while (!stk.empty() && (arr[i] > arr[stk.top().first]))
            stk.pop();

        if (!stk.empty())
            if (arr[stk.top().first] == arr[i])
            {
                ans[i] = ans[stk.top().first] + 1;
            }
        stk.push({i, 0});
    }

    return ans;
}

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
        ll n;
        cin >> n;
        vector<ll> arr(n,0);
        REP(i, 0, n)
            cin >> arr[i];

            vector<ll> left = next_great_left(arr);
            vector<ll> right = next_great_right(arr);

            REP(i, 0, n)
                cout << left[i] + right[i] << " ";
                cout << endl;
    }
}