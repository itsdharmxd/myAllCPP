#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        long long k;
        cin >> n >> k;
        long long num = -1, moves = INT64_MAX;
        for (int i = 0; i < n;i++){
            long long d;
            cin >> d;
            if(((k%d)==0)&&(d<k)){
                if((k/d)<moves){
                    moves = k / d;
                    num = d;
                }
            }

        }
        cout << num<<"\n";
    }
}