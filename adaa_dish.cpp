#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n;i++){
            cin >> arr[i];
        }
        sort(arr, arr + n);
        if(n==1){
            cout << arr[0]<<endl;
        }else if(n==2){
            cout << (arr[0] > arr[1] ? arr[0] : arr[1]) << endl;
        }else if(n==3){
            cout << ((arr[0] + arr[1]) > arr[2] ? (arr[0] + arr[1]) : arr[2]) << endl;
        }else {
            int max = ((arr[0] + arr[3]) > (arr[2] + arr[1]) ? (arr[0] + arr[3]) : (arr[1] + arr[2]));
            int max2 = ((arr[0] + arr[2] + arr[1]) > (arr[3]) ? (arr[0] + arr[1] + arr[2]) : (arr[3]));
            cout << (max < max2 ? max : max2) << endl;
        }

    }

   

}