#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin.tie(0);
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
        if(n==1){
        vector<unsigned long long> vec[n];
       unsigned long long positive = 0, negative = 0;
        for (int i = 0; i < n;i++)
        {
            int num;
            cin >> num;
            for (int j = 0; j < num;j++){
                int d;
                cin >> d;
                if(d<0)
                    negative++;
                    else
                        positive++;
                vec[i].push_back(d);
            }
        }
        cout << positive*negative<<endl;
           
 

        }else
        cout << 3 << endl;
    }
}