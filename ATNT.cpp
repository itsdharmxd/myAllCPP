#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include<unordered_map>

#include <algorithm>
using namespace std;
//int func = 0;
vector<vector<int>> tree(100010);
vector<int> mem(100010,-1);

int solve(int node,int par,int task){
//    func++;
    int children = tree[node].size();
    int ans = 0;

    
    if(children==0){

        return  ans;

    }else if(task%children==0){
       
                
        for (int i = 0; i < children; i++)
        {   
            if (mem[tree[node][i]]!=-1){
                if (((task / children) >= mem[tree[node][i]]) && (((task / children) % mem[tree[node][i]]==0))){
                    continue;
                }
            }
                int re = solve(tree[node][i], node, task / children);
                ans += re;
        if(re==0){
            mem[tree[node][i]] = task / children;
        }


        }
    
        return  ans;
    }else if(task%children>0){

        return task;
    }




}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif // !ONLINE_JUDGE
    int n,q,d;
    int arr[100010]={};
    arr[1] = -1;
    cin >> n;
    for (int i = 2; i <= n;i++)
     {
          
         cin >> d;
         arr[i] = d;
         tree[d].push_back(i);
     }
    cin >> q;
    while (q--)
    {
        
        int v, w;
        cin >> v >> w;

        int ans = solve(v,arr[v], w);
       

       
        printf("%d\n",ans);
   //     func = 0;
    }
}