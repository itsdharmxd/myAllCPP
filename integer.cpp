#include<cstdio>
#include <bits/stdc++.h>
using namespace std;
int max_count = 0;
int mostFrequent(int arr[], int n)
{
    
    sort(arr, arr + n);
    int i=0;
    int last = arr[0],count=1;
    return 0;
}
int main(){
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int a[3],b[3];
        for (int i = 0; i < 3;i++)
            scanf("%d", &a[i]);
        for (int i = 0; i < 3; i++)
            scanf("%d", &b[i]);
        int operations = 0;
        int dif[3], mul_dif[3];
        //  while (a[1] == b[1] && a[0] == b[0] && a[2] == b[2] ){
        dif[0] = -1, dif[1] = -1, dif[2] = -1;
        mul_dif[0] = -1, mul_dif[1] = -1, mul_dif[2] = -1;
        int dif_count = 0, mul = 0;
        int small = __INT_MAX__;

        for (int i = 0; i < 3; i++)
        {
            if (a[i] != b[i])
            {
                dif[i] = b[i] - a[i];
                if (dif[i] % a[i] == 0){
                    mul++;
                    mul_dif[i] = (dif[i] + a[i]) / a[i];
                    }
                dif_count++;
                if ((small > dif[i]) && (dif[i] != -1))
                    small = dif[i];
            }
            }
            int add = dif_count;
            int mul_large = mostFrequent(mul_dif, 3);

            printf("%d %d %d %d", small, add, mul_large, max_count);
          
            //   }
    }
    
}