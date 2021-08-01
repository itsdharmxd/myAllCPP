#include<iostream>
#include<string>
using namespace std;


int main(){


#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif // !ONLINE_JUDGE

    string s;
    cin >> s;

    long long ans = 0;

    for (int i = 0; i < s.length();i++){
        int t = s[i] - '0';
          
       if(t%4==0)
           ans++;

    }

    for (int i = 0; i < s.length()-1; i++)
    {   
        int t = s[i] - '0';
        int t1 = s[i+1] - '0';
        t = t * 10 + t1;
        if (t % 4 == 0)
            ans+=i+1;
    }

    cout << ans;
}