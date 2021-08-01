#include <cstdio>
int main(){
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int len;
        scanf("%d", &len);
        int arr[len];
        for (int i = 0; i < len;i++){
            scanf("%d", arr[i]);
        }
        int i5 = 0, i10 = 0, i15 = 0;
        int c = 0;
        for (int i = 0; i < len;i++){
            if(arr[i]==5){
                i5++;
            }else if(arr[i]==10){
                i10++;
                if(i5==0){
                    c = 1;
                    break;
                }
                i5--;
            }else if(arr[i]==15){
                i15++;
                if((i10==0)&&(i5<2)){
                    c = 1;
                    break;
                }
                if(i10!=0){
                    i10--;
                }else {
                    i5 -= 2;
                }
            }
        }
        if(c)
            printf("NO\n");
            else
                printf("YES\n");
    }
    
}