#include<cstdio>
#include<iostream>
using namespace std;
int main(){
    long t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        if(n==0){
            printf("0\n");
            continue;
        }
        long arr[n];
        long first = -1, last = -1;
        for (long i = 0; i < n; i++)
        {
      
            cin >> arr[i];
            if (arr[i] == 1 && (first < 0))
            {
                first = i;
            }
            if (arr[i] == 1)
            {
                last = i;
            }

       }
       long first_zero = 0, last_zero = 0;
       for (long i = first; i < n; i++)
       {
        if(arr[i]==0){
            first_zero++;
        } 
          
       }
       for (long i = 0; i <= last; i++)
       {

           if (arr[i] == 0)
           {
               last_zero++;
           }
       }
       printf("%ld\n", first_zero < last_zero ? first_zero : last_zero);
    }
    
  

}