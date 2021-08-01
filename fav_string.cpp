#include <iostream>
#include<string>
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
        string str;
        cin >> str;
        if (str[0] == '2' && str[1] == '0' && str[2] == '2' && str[3] == '0'){
            cout << "YES" << endl;
        }
        else if (str[n-4] == '2' && str[n-3] == '0' && str[n-2] == '2' && str[n-1] == '0'){
            cout << "YES" << endl;
        }
        else if (str[0] == '2' && str[ 1] == '0' && str[n - 2] == '2' && str[n - 1] == '0')
        {
            cout << "YES" << endl;
        }
        else if (str[0] == '2' && str[n-3] == '0' && str[n - 2] == '2' && str[n - 1] == '0')
        {
            cout << "YES" << endl;
        }
        else if (str[0] == '2' && str[1] == '0' && str[2] == '2' && str[n - 1] == '0')
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
    }
}