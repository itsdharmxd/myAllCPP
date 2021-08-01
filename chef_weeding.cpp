#include<iostream>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){ 
        long n, c;
        cin>>n>>c;
        long long total=c;
        int arr[n];
         
        for(int i=0;i<n;i++){ 
            cin>>arr[i];
        }
        int table=1;
        long search=0;
        for(long i=0;i<n;i++){ 
            int found=0;
            for(long g=search;g<i;g++){ 
                if (arr[g]==arr[i]) {
                    found++;
                   
                }
            }
            if(found){
                
                long inc_table_cost=0, arg_table_cost=0;
                found+=1;
               
                inc_table_cost=(table+1)*c;
                arg_table_cost=(table*c)+((found>2)?1:found);
                if(arg_table_cost>=inc_table_cost){
                   
                    table+=1;
                    
                    search=i;
                    total=  (table)*c;
                }
                else {
                   
                    if(found>2){ 
                        total+=1;
                    }
                    else {
                        total+=found;
                    }
                }

            }

        }
        cout<<table<<"  "<<total<<"\n";

        


    }

}