#include <iostream>
#include <string>
using namespace std;
unsigned long long gcd(unsigned long long a, unsigned long long b)
{
    unsigned long long gc = 0;
    while (b != 0)
    {
        gc = b;
        b = a % b;
        a = gc;} return gc;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE

    
        long long n, m;
        cin >> n >> m;
        unsigned long long arr[n], brr[m];
        for (long long i = 0; i < n;i++)
            cin >> arr[i];
        for (long long j = 0; j < m;j++)
            cin >> brr[j];
        for (long long j = 0; j < m;j++){
            unsigned long long result = arr[0] + brr[j];
            for (long long i = 1; i < n;i++){
                result = gcd(result, arr[i] + brr[j]);
            }
            cout << result << " ";
        }
    
}