#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int current = c;
        int found = 1;

        for (int i = 0; i < a;i++){
            int n = (c + b) % a;
            if(d==n){
                printf("YES\n");
                found = 0;
                break;
            }
            c = n;

        }
         if(found){
             printf("NO\n");
         }
        

    }
    
}