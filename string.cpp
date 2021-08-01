#include<cstdio>
int main(){
    int n;
    scanf("%d", &n);
    while (n--)
    {
        char str[1000];
        scanf("%s", str);
        char str2[1000];
        str2[0] = str[0];
        str2[1] = str[1];
        int j = 2;
        for (int i = 2; str[i] != '\0';i+=2,j++){
            str2[j] = str[i + 1];
        }
        str2[j] = '\0';
        printf("%s\n", str2);
    }
    
}