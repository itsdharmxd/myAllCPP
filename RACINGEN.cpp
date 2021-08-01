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
        ll x, r, m,r_min,m_min;
        cin >> x >> r >> m;
        r_min = 60 * r;
        m_min = 60 * m;
        
      if(x>=r_min){
          cout << "YES" << endl;
      }else{
          r_min -= x;
          m_min -= x;
         if(m_min%2==1){
             m_min -= 1;
         }
         if((r_min*2)<=m_min){
             cout << "YES" << endl;
             
         }else
             cout << "NO" << endl;
         

      }

     }
}