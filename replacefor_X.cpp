#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
    long t;
    scanf("%ld", &t);
    while (t--)
    {
        long n, x, p, k;
        scanf("%ld%ld%ld%ld", &n, &x, &p, &k);
        long arr[n];
        long big = 0, small = 0, found = 0;

        for (int i=0;i<n;i++)
        {
            scanf("%ld",&arr[i] );
            if((arr[i]==x)&&!found){
                found = 1;
            }
            else if (arr[i] > x)
            {
                big++;
            }
            else if (arr[i] < x)
            {
                small++;
            }
            
        }
        sort(arr, arr + n);

        long small_k = arr[k-1];
        long index_x = small+1;
        printf("%ld  %ld %ld  %ld \n", small_k, index_x , p,k);
        if (!found)
        {
            printf("-1\n");
       }else{
          if(k>index_x){
              if(p<=k ){
                  printf("%ld\n", (p > index_x) ? (p - index_x) : ( index_x-p));
              }else{
                  printf("-1\n");
              }

                      
          } else if(k<index_x) {
              if (p >= k)
              {
                  printf("%ld\n", (p > index_x) ? (p - index_x) : (index_x - p));
              }
              else
              {
                  printf("-1\n");
              }
          }else{
              printf("0\n");
          } 
 

       }

    
  
         
    }
    

}