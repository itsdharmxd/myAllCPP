#include<cstdio>


int main(){
    long t;
    scanf("%ld", &t);
    while (t--)
    {
       long long n;
        scanf("%lld", &n);
       long long arr[n],brr[n];
        for (long long i = 0; i < n;i++){
            scanf("%lld", &arr[i]);
        }
        brr[0] = arr[0];
        long long sum = brr[0];
        long long g = n;
        int terminate = 0;
        long long arr_n = 1;
        for (long long i = 1; i < n;i++){

            int found = 1;
            if ((sum + arr[arr_n] )== 0)
            {
                printf(" %lld", sum + arr[arr_n]);
                int found = 1;
                for (long long j = arr_n+1; j < g; j++)
                {
                    printf(" %lld", sum + arr[arr_n]);
                    if ((sum + arr[arr_n]) != 0)
                    {
                        printf(" %lld", sum + arr[arr_n]);
                        found = 0;
                        brr[i] = arr[arr_n];
                        for (long long k = arr_n; k < g - 1; k++)
                        {
                            arr[k] = arr[k + 1];
                        }
                        arr_n--;
                        g--;
                    }
                   
                
                }
          }else{
              printf(" %lld", sum + arr[arr_n]);
              brr[i] = arr[i];
              sum += arr[i];

          }
          if (found)
          {
              printf("NO\n");
              terminate = 1;
              break;
          }
          if(terminate){
              break;
          }
          arr_n++;

        }
        if(terminate){

        }else{
            for (long long i = 0; i < n;i++){
                printf("%lld ",brr[i]);
            }
            printf("\n");
        }

    }
    
}