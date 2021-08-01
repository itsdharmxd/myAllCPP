#include<iostream>

using namespace std;

int main(){

#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif 

    int n, s;
    cin >> n >> s;

    int arr_right[n],arr_left[n];
    for (int i = 0; i < n;i++)
        cin >> arr_right[i];

    for (int i = 0; i < n; i++)
        cin >> arr_left[i];

     if(arr_right[0]){
       if(arr_right[s-1]){
           cout << "YES\n";
       }else{
        if(arr_left[s-1]){
            int mark = 1;
            for (int i = s; i < n;i++){
                if(arr_left[i]&&arr_right[i]){
                    cout << "YES\n";
                    mark = 0;
                    break;
                }
            }
            if(mark)
                cout << "NO\n";

        }else
            cout << "NO\n";
    

       }  
     }else
         cout << "NO\n";

}