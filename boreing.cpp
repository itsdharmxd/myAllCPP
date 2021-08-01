#include<cstdio>
using namespace std;

int main(){
    long t;
    scanf("%ld", &t);
     while(t--){
         long n;
         scanf("%ld",&n);
         int count = 0;
         int number = 0;
         while(n){
             long d = n % 10;
             count++;
             number = d;
             n /= 10;
         }
      

         long total_sum = 10 * (number - 1);
         switch(count){
             case 1:
                 total_sum += 1;
                 break;
             case 2:
                 total_sum += 3;
                 break;
             case 3:
                 total_sum += 6;
                 break;
             case 4:
                 total_sum += 10;
                 break;
         }

         printf("%ld\n", total_sum);

     }

}