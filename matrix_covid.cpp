#include<cstdio>
#include <cstdlib>
int main()
{
       int n;
       scanf("%d", &n);
       while (n--)
       {
           int len, p;
           scanf("%d %d", &len, &p);
           int arr[len][len]={0};
           for (int i = 0; i < len;i++){
               for (int j = 0; j < len;j++){
                   printf("1 %d %d %d %d\n", i + 1, j + 1, i + 1, j + 1);
                   int a;
                   fflush(stdout);
                   scanf("%d", &a);
                   if(a==1){
                       arr[i][j] = 1;
                   }
               }
           }
           printf("2\n");
           for (int i = 0; i < len; i++)
           {
               for (int j = 0; j < len; j++)
               {
                   printf("%d ", arr[i][j]);
               }
               printf("\n");
           }
           
           int x;
           fflush(stdout);
           scanf("%d", &x);
           printf("\n");
           if (x == 1)
               continue;
               else
               {
                   exit(0);
               }
               
       }
       


}