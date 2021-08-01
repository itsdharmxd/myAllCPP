#include <cstdio>
int main(){
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int len;
        printf("k\n");
        scanf("%d", &len);
        int arr[n];
        for (int i = 0; i < len;i++){
            scanf("%d", &arr[i]);
        }
        if(len==1){
            if(arr[0]%2==0)
                printf("0\n");
             else
             {
                 printf("-1\n");
             }
             continue;
        }
        int odd = -1, even = -1;
        int oddlen = 1;
        int evenlen = 0;
        int swap=0;
        while(oddlen<len&&evenlen<len)
      {
        //odd
        printf("1\n");
        while((arr[oddlen]%2==1)&&(oddlen<len)){
            printf("2\n");
            oddlen += 2;
        }
        odd = arr[oddlen];
        oddlen++;
        //even
        while ((arr[evenlen] % 2 == 0)&&(evenlen<len))
        {
            printf("3\n");
            evenlen += 2;
        }
        even = arr[evenlen];
        evenlen++;
        //swap
        printf("odd=%d even=%d\n", odd, even);
        if ((odd ==-1) && (even == -1)){
            printf("%d\n", swap);
            break;
        }
        if ((odd == -1) || (even == -1)){
            printf("-1\n");
            break;
        }
        

            if ((odd != -1) && (even != -1))
            {
                int temp = arr[oddlen];
                arr[oddlen] = arr[evenlen];
                arr[evenlen] = temp;
                swap++;
                odd = -1;
                even = -1;
            }
      }
    }
    
}