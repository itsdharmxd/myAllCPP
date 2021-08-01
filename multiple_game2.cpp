#include<bits/stdc++.h>

using namespace std;

int main(){
//     cout << "dharmesh";
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);

// #endif // !ONLINE_JUDGE

    int t;
    cin >> t;
    while (t--)
    {
        int n, q, m;
        cin >> n >> q >> m;
        int a[n];
        for (int i = 0; i < n;i++)
            cin >> a[i];

        int b[1000001] = {};
        map<pair<int, int>, int> mpp;

        while (q--)
        {
            int l, r;
            cin >> l >> r;
            l--, r--;
            if(a[l]>m){

                continue;
            }else if(a[l]<=m && a[r]>m){
                b[a[l]]++;
                b[m + 1]--;


            }else{
                b[a[l]]++;
                b[m + 1]--;
                mpp[{a[l], a[r]}]++;

            }
           
        

        }
        for(auto x:mpp){
            int ai = x.first.first;
            int bi = x.first.second;
            int l = x.second;

            b[bi + ai] -= l;
            b[bi + 2 * ai] += l;
            int c = bi + 2 * ai;
            while (c+bi<=m)
            {
                c += bi;
                b[c] -= l;
                b[c + ai] += l;
                c += ai;
            }
            




        }
        int mx = 0;
        for (int i = 1; i <= m;i++){
            b[i] += b[i - 1];
            mx = max(mx, b[i]);
        }
        cout << mx << endl;
    }
    


}