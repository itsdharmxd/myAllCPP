#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        long arr[n], min = INT16_MAX, max = 0;
        

        for (int i = 0; i < n;i++){
            cin >> arr[i];
            if(arr[i]>max){
                max = arr[i];
            }
            if(arr[i]<min){
                min = arr[i];
            }
            }

            long long sum = (min + max) / 2;
            for (int i = 0; i < n;i++)
                cout << sum << " ";

            cout << endl;
    }
}