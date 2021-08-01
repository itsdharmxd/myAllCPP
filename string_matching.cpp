//*=0 or mode character
// ?=any one character


#include<bits/stdc++.h>
using namespace std;

int main(){

    string a = "x?y*z";
    string str = "xayz";
    int n = a.size(), m = str.size();
    vector<vector<int>> arr(n+1,vector<int>(m+1));

    arr[0][0] = 1;

    for (int i = 1; i <= a.size();i++){
        for (int j = 1; j <= str.size();j++){
           if(a[i-1]==str[j-1]||a[i-1]=='?')
               arr[i][j] = arr[i - 1][j - 1];
            else if(a[i-1]=='*'){
                arr[i][j] = arr[i][j - 1] || arr[i - 1][j] ;
            } 
        }
    }

    for (int i = 0; i <= a.size(); i++)
    {
        for (int j = 0; j <= str.size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}