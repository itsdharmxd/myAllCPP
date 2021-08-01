#include <iostream>
#include <string>
#include<cstdlib>
#include<cmath>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif // !ONLINE_JUDGE

    string s;
    cin >> s;
    if (s.length()==1){
        cout << s<<endl;
    }else if(s.length()==2){
        if(s[0]!=s[1]){
            cout << s << endl;
        }else{
            s[1]++;
            if(s[1]>'z'){
                s[1] -= 'a';
            }
            cout << s << endl;
        }
    }else {

        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                if(i+2<s.length()){
                    //    if(){

                    //    }
                }else{
                    s[i + 1] = s[i]++;
                }
            }
        }

    }
}