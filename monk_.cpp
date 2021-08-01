#include<iostream>
using namespace std;

int main(){


freopen("input.txt","r",stdin);

freopen("output.txt", "w", stdout);

int t;
cin >> t;
while (t--)
{
    int n;
    cin >> n;
    int arr[n][n];
    for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	  cin>>arr[i][j];

 int pairs = 0;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
       //     cout << i << j << " " << endl;

            for (int k = 0; k <= i;k++){
                for (int l = 0; l <= j;l++){
                  //  cout << k << l << " ";
                    if(arr[k][l]>arr[i][j])
                        pairs++;
                }
            }
        }
  cout<<pairs<<endl;
        	     
   


 }
}