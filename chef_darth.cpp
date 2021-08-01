#include <iostream>
using namespace std;
int main()
{
    long  t;
    cin >> t;
    while (t--)
    {
        long H, P;
        cin>>H>>P;
        long total = 0;
        int mark = 1;
        while(P){
            total += P;
            if(H<=total){
                cout << "1\n";
                mark = 0;
                break;
            }
            
            P = P >> 1;

        }
        if (mark)
            cout << "0\n";
    }
}