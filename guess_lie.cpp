#include <cstdio>
#include <cmath>
int main()
{
    long long n;
    scanf("%lld%*c", &n);
    long long start = 1, end = n, mid;
    char E = 'E', G = 'G', L = 'L';
    mid = (start + end) >> 1;
    printf("%lld\n", end);
    fflush(stdout);
    char a;
    scanf("%c%*c", &a);
    if (a == E)
        exit(0);
    int mark = 0;
    if (a == G)
        mark = 1;
    else if (a == L)
        mark = 0;

    while (start <= end)
    {
        mid = ((start + end) >> 1);
        printf("%lld\n", mid);
        fflush(stdout);
        char aa;
        scanf("%c%*c", &aa);
        if (aa == E)
            exit(0);
        printf("%lld\n", mid);
        fflush(stdout);
        char bb;
        scanf("%c%*c", &bb);
        if (bb == E)
            exit(0);
        if (aa == bb)
        {
            if (aa == G)
                start = mid;
            else if (aa == L)
                end = mid;
        }
        else if (aa != bb)
        {
            char cc;
            if (mark)
                cc = aa;
            else
                cc = bb;
            if (cc == G)
                start = mid;
            else if (cc == L)
                end = mid;
        }
    }
}