#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long  t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        long arr[n],brr[n]={0};
        for (long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (long i = 0; i < n; i++)
        {
            long store_index = arr[i];

            if(store_index==(i+1)){
                   if(!brr[i]){
                       brr[i] = store_index;
                   }

            }else{
                if (!brr[i])
                {
                    brr[i] = i+1;
                }else{

                }
                if (!brr[store_index-1])
                {
                    brr[store_index-1] = 1*(i+1);

                }else{
                    brr[store_index-1] *= i+1;
                }
            }

            for (long i = 0; i < n; i++)
            {
                cout << brr[i] << " ";
            }
            cout << endl;
        }
        for (long i = 0; i < n; i++)
        {
            cout << brr[i]<<" ";
        }
    }
}