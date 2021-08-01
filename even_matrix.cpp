#include <cstdio>
int main(){
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int len;
        scanf("%d", &len);
        int arr[len][len];
        int even = 2, odd = 1;
        for (int i = 0; i < len;i++){
            for (int j = 0; j < len;j++){
                 if((i+j+2)%2==0){
                     arr[i][j] = odd;
                     odd += 2;
                 }else{
                     arr[i][j] = even;
                     even += 2;
                 }

            }
        }
        for (int i = 0; i < len; i++)
        {
            for (int j = 0; j < len; j++)
            {
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }
    }
    

}