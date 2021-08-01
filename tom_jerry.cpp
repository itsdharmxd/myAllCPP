#include<cstdio>

int main(){
    long long n;
    scanf("%lld", &n);
    while (n--)
    {
        int tom;
        int times = 0;
        scanf("%d", &tom);
        if(tom%2==1){
            if(tom==1){
                times = 0;
            }else{
                times = (tom - 1) / 2;
            }
        }else
        {
            if(tom==2){
                times = 0;
            }else
            {
                for (int i = 3; i < tom;i+=2){
                    if(tom%i==0){
                        times = (i - 1) / 2;
                    }

                }
            }
            
        }
        printf("%d\n", times);
    }
    
}