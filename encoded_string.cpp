#include <iostream>
#include<algorithm>
#include<string>
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
        int n;
        cin >> n;
        int str_len = n / 4;
        int arr[n];
        string str;
        string bit_str;
        cin >> bit_str;
        
        for (int i = 0; i < n;i++)
            { 
                if(bit_str[i]=='1')arr[i]=1;else
                    arr[i] = 0;
            }
        for (int i = 0,j=0; i < n ;j++ ,i+=4){
            int a = arr[i + 0];
            int b = arr[i + 1];
            int c = arr[i + 2];
            int d = arr[i + 3];
            int nu = (a * (1 << 3)) + (b * (1 << 2)) + (c * (1 << 1)) + (d * (1 << 0));
         //   cout << nu << " 1";
            str.push_back(  nu + 'a');
        }

            cout << str << endl;
    }
}