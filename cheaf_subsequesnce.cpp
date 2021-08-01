#include <iostream>
#include<cmath>
#include<algorithm>
#include<list>
#include<unordered_map>
using namespace std;
int mostFrequent(_List_iterator<long> arr    ,size_t n)
{
    // Insert all elements in hash. 
    unordered_map<int, int> hash;
    for (int i = 0; i < n; i++,arr++)
        hash[*arr]++;

    // find the max frequency 
    int max_count = 0, res = -1;
    for (auto i : hash) {


        if (max_count < i.second) {
            res = i.first;
            max_count = i.second;
        }else if(max_count == i.second) {
            res =(i.first<res) ?i.first:res;
           
        }
    }

    return res;
}
int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        long arr[n];
        long brr[n] = {0};
        for (long i = 0; i < n;i++){
            cin >> arr[i];
        }
        for (long i = 1; i < pow(2, n);i++){
            list<long> li;
            for(long j=0;j<n;j++){ 
                if((i>>j)&1){ 
                    li.push_back(arr[j]);
                }
            }
          long fr=   mostFrequent(li.begin(), li.size());
          for(long f=0;f<n;f++){ 
              if(arr[f]==fr){ 
                  brr[f]++;
                  break;
              }
          }
        }
        for(long i=0;i<n;i++){ 
            cout<<(brr[i]%1000000007)<<" ";
        }
        cout<<"\n";
    }
}