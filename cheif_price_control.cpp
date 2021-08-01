#include<cstdio>
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int a, k,loss=0;
        for (int i = 0; i < a;i++){
            int num;
            scanf("%d", &num);
            if(num>k){
                loss += (num - k);
            }

        }
        printf("%d\n", loss);
    }
}