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
        ll n;
        cin >> n;
      
      if(n==1){
          cout << 20 << endl;
      }else if(n==2){

          cout << 36 << endl;
      }else if(n==3){
          cout << (18 + 18 + 15)<<endl;
      }else{
          ll level = n / 4,d=n%4,cost=0;
          cost += level * (44);
          cost += 16;

          if (d == 1)
          {
              cost += 20 - 4;
          }
          else if (d == 2)
          {

              cost += 36 - 8;
          }
          else if (d == 3)
          {
              cost += (18 + 18 + 15)-12;
          }
          cout << cost << endl;
      }
      

      
 

    }
}