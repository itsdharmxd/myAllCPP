#include<iostream>
using namespace std;
int main(){
    long t;
    cin >> t;
    while (t--)
    {long c,r;
        cin >> c >> r;
        int cd = 0, rd = 0;
        cd = c / 9 + ((c % 9 == 0) ? 0 : 1);
        rd = r / 9 + ((r % 9 == 0) ? 0 : 1);
        if(cd>rd){
            cout << "0 " << cd << "\n";
        }else{
            cout << "1 " << rd << "\n";
        }

    }

    
}