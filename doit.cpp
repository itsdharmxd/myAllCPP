
#include <bits/stdc++.h>
using namespace std;
#define MAX n

int main()
{

    string s = "qwertyqwertyqwerty";
    //   cin >> s,
    int n = s.size();
    bool mark[n] = {};
    int f[n] = {}, k = 0;
    for (int i = 1; i < n; i++)
    {
        while (k && s[i] != s[k])
            k = f[k - 1];
        if (s[i] == s[k])
            k++;
        if (i < n - 1)
            mark[k] = true;
        f[i] = k;
    }
    mark[0] = true, k = f[n - 1];
    while (k && !mark[k])
        k = f[k - 1];
    if (k)
        cout << s.substr(0, k);
    else
        cout << "Just a legend";
}