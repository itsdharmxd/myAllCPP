#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll> pp1, pp2;

bool isinrange(ll a,ll b){
    for (ll i = 0; i < pp1.size();i++){
      if(pp1[i]<=b && pp2[i]>=a)
          return true;

    }
    return false;
}


int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, x, y;
        cin >> n >> m >> x >> y;
        ll a[m], b[m], c[m],d[m];
        for (ll i = 0; i < m;i++){

            cin >> a[i] >> b[i] >> c[i] >> d[i];

        }

        if(x==y){

            cout << "0" << endl;
            continue;

        }
        ll di[m],ans=-1,z=0;
        vector<ll> q1,q2;

        for (ll i = 0; i < m;i++)
            di[i] = 0;

        q1.push_back(x);
        q2.push_back(x);

        while ((ans==-1)&&(q1.size()!=0))
        {
            pp1.clear();
            pp2.clear();
            pp1 = q1;
            pp2 = q2;
            vector<ll> w1, w2;

            for (ll i = 0; i < (m);i++){
              if((di[i]==0)&& isinrange(a[i],b[i])){
                  w1.push_back(c[i]);
                  w2.push_back(d[i]);
                  if(c[i]<=y && d[i]>=y){
                      ans = z + 1;
                  }
                  di[i] = 1;
              }


            }

            q1 = w1;
            q2 = w2;
            z++;

        }

        cout << ans << endl;
  
 

     }
    





}