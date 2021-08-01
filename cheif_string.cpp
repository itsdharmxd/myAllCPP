#include <cstdio>
int main()
{
    long n;
    scanf("%ld", &n);
    while (n--)
    {
        char str[1000000];
        scanf(" ");
        scanf("%s", str);
        long long pair = 0;
        for (long long i = 0; str[i] != '\0'; i++)
        {
           if((str[i]=='x')&&(str[i+1]=='y')){
               pair++;
               i++;
           }
           else if ((str[i] == 'y') && (str[i + 1] == 'x')){
               pair++;
               i++;
           }
        }
        printf("%lld\n",pair);
    }
}