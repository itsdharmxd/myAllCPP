#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif // !ONLINE_JUDGE

    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n>>k;
        int x, y;
        cin >> x >> y;

        pair<int, int> points[4];

        bool up = 0;
        if(x==y){
            cout << n <<" "<< n<<endl;
        }else if(x>y){
          //first point
          int dif = n - x;
          x += dif;
          y += dif;
          points[0].first = x;
          points[0].second = y;

          dif = n - y;
          x -= dif;
          y += dif;
          points[1].first = x;
          points[1].second= y;

          dif = x;
          x -= dif;
          y -= dif;
          points[2].first = x;
          points[2].second = y;

          dif = y;
          y = x;
          x = dif;

          points[3].first = x;
          points[3].second = y;

        //   for (int i = 0; i < 4;i++)
        //       cout << points[i].first << " " << points[i].second << endl;

          dif = k % 4;
          cout << points[dif-1].first << " " << points[dif-1].second << endl;
        }else if(y>x){

            int dif = n - y;
            x += dif;
            y += dif;
            points[0].first = x;
            points[0].second = y;

            dif = x;
            x = y;
            y = dif;
            points[1].first = x;
            points[1].second = y;

            dif = y;
            x -= dif;
            y -= dif;
            points[2].first = x;
            points[2].second = y;

            dif = x;
            x = y;
            y = dif;
            points[3].first = x;
            points[3].second = y;

            // for (int i = 0; i < 4; i++)
            //     cout << points[i].first << " " << points[i].second << endl;

            dif = k % 4;
            cout << points[dif - 1].first << " " << points[dif - 1].second << endl;
        }
         
    }
}