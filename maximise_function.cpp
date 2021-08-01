#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include<algorithm>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif // !ONLINE_JUDGE

    long long t;
    cin >> t;
    while(t--){

        long long n;
        cin >> n;
        long long arr[n];
        for (long long i = 0;i<n;i++)
            cin >> arr[i];
        long long max = 0, min = INTMAX_MAX;
        for (long long i = 0; i < n; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
            if (arr[i] < min)
            {
                min = arr[i];
            }
        }
      
        cout <<2*(max>min?(max-min):(min-max)) << endl;
    }


}