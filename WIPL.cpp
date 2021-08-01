#include<iostream>
#include<algorithm>

using namespace std;
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif // !ONLINE_JUDGE
 

    int t;
    cin >> t;
    while (t--)
    {
        int n, k,boxes=0;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n;i++)
            cin >> arr[i];

        sort(arr, arr + n);
        reverse(arr, arr + n);
       
            int t_one = 0, t_two = 0;
        int i = 0;
        for (; i < (n%2==0?n:n-1) && ((t_one < k )&& (t_two < k)); i += 2)
        {
         //   cout << i << " ";
            //      cout << "t_one=" << t_one<<k;
            int a = arr[i], b = arr[i + 1];
            if ((t_one + b) >= k ||( t_two + a)>=k)
                {
                    //    cout << "if";
                    t_one += b;
                    t_two += a;
                    boxes += 2;
                }
            else
            {
          //      cout << "else";

                if(t_one>t_two){
                    t_one += b;
                    t_two += a;
                    boxes += 2;
                }else{ 

                t_one += a;
                t_two += b;
                boxes += 2;
                }
            }
        }
    //    cout << i << " ";
        if((t_one>=k)&&(t_two>=k)){

            cout << boxes << endl;
  
        }
        else if (t_one >= k || t_two >= k){
         //   cout << "run"<<t_one<<" "<<t_two<<endl;
            if (t_one > t_two)
            {
                while (t_two < k&&i<n)
                {
              //      cout << arr[i] << "--2 ";
                    t_two += arr[i];
                    boxes++;
                    i++;
                }
                if(t_two<k)
                    cout << -1 << endl;
                else
                cout << boxes << endl;
           }else{
               while (t_one < k&&i<n)
               {
              //     cout << arr[i] << " ----1";

                   t_one+= arr[i];
                   boxes++;
                   i++;
               }
               if (t_one < k)
                   cout << -1 << endl;
               else
                   cout << boxes << endl;
           }
        }else
        {
            cout << -1<<endl;
        }
        
    }
    
}