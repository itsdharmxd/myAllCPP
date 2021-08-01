#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);

   int t;
   cin >> t;
   while (t--)
    {
        int n, k, d;
        cin >> n >> k >> d;
        long long sum=0;
        for (int i = 0; i < n;i++)
          {
              int a;
              cin >> a;
              sum += a;
          }
          int div = sum / k;
          if (div>d)
              div = d;

          cout << div << endl;
       

   }
   

}