#include <cstdio>
#include<cstdlib>

int main()
{
    
    unsigned long long int n;
    scanf("%llu%*c",&n);
    int mark=0;
    unsigned long long int start =1 , end = n, mid;
     char G = 'G', E = 'E', L = 'L';
     for(int i=0;i<120;i++)
     {
         mid = ((start+end)>>1);
         char a, b;
       if(!mark){  printf("%llu\n", mid);
         fflush(stdout);
         scanf("%c%*c", &a);

         if (a == E)
             exit(0);}
         printf("%llu\n", mid);
         fflush(stdout);
         scanf("%c%*c", &b);
       if(mark)a=b;
         if (b == E)
             exit(0);
         if (a == b)
         { mark=0;
             if (b == L)
             {
                 end = mid-1;
             }
             else if (b == G)
             {
                 start = mid+1;
             }
            
         }
         else if (a != b)
         { 
             char c;
             printf("%llu\n", start);
             fflush(stdout);
             scanf("%c%*c", &c);

             if (c == E)
             {
                 exit(0);
             }
             if (c == L)
             {   mark=1;
                 if (b == L)
                 {
                     end = mid-1;
                 }
                 else if (b == G)
                 {
                     start = mid+1;
                 }
             }
             else if (c == G)
             {
                 char d = L;
                 while (d != G)
                 {
                     printf("%llu\n", end);
                     fflush(stdout);
                     scanf("%c%*c", &d);

                     if (d == E)
                     {
                         exit(0);
                     }
                     end=end-1;
                 }
                 end+=1;
                 mid = ((start+end)>>1);
                 
                 printf("%llu\n", mid);
                 fflush(stdout);
                 scanf("%c%*c", &d);

                 if (d == E)
                 {
                     exit(0);
                 }
                 if (d == L)
                 {
                     end = mid-1;
                 }
                 else if (d == G)
                 {
                     start = mid+1;
                 }
             }
         }
        if(start>end){
            start=1;
            end=n;
        }
        
    }
    exit(0);
}