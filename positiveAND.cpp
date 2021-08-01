#include<cstdio>
using namespace std;
int main(){

    long long t;
    scanf("%lld", &t);
    while (t--)
    {
        long long n;
        scanf("%lld", &n);
        long long arr[n];
        if((n&(n-1))<1){
            printf("-1\n");
            continue;
        }
        int mark = 0;
        for (long long i = 1; i <= n;i++){
            if ((i & (i - 1)) == 0)
            {   
      
                
                mark = 1;
                arr[i - 1] = i + 1;
             //   printf("%ld ", i + 1);
            }else if(mark){

                if (i == 3)
                {
                    mark = 0;
                    arr[i - 1] = i - 2;
              //      printf("%ld ", i - 2);
                }else{
                    arr[i - 1] = i - 1;
                  //  printf("%ld ", i - 1);
                    mark = 0;}
            }else{
                arr[i - 1] = i ;
             //   printf("%ld ", i);
            }

            

        }
        for (long long i = 0; i < n;i++){
            // printf("%d ", arr[i] & arr[i + 1]);
            // printf("%ld\n", arr[i]);
                

            // if((arr[i]&arr[i+1])<1){
            //     printf("found %ld %ld ",arr[i],arr[i+1] );
                
            // }
            if ((i & (i + 1)) < 1)
            {
                printf("found %lld %lld \n", i, i + 1);
            }
        }

            printf("\n");
    }
    

   

}