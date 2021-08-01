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
        ll a, y, x,candels=1,exhaust_time=0;
        cin >> a >> y >> x;
      if(a>=y){
          cout << x * y << endl;

      }else {
          cout << (1 + a * x) << endl;
          
      }
     

    }
    
 

}