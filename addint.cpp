#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE

    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;
        long ans = 0;
        int last_num = 9;
        
        while (x)
        {
            if ((last_num == 0)&&(x>0)){
                    ans = -1;
                    break;
            }
                if (x < 10)
                {
                       if(x<last_num){
                    ans = (ans * 10) + x;
                    x = 0;}
                    else
                    {
                        x = x - last_num;
                        ans = (ans * 10) + last_num;
                        last_num--;
                    }
                    
                }
                else
                {
                    x = x - last_num;
                    ans = (ans * 10) + last_num;
                    last_num--;
                }
            
            

       }

       int ans2 = 0;
       while (ans)
       {
           int d = ans % 10;
           ans2 = (ans2 * 10) + d;
           ans /= 10;
       }
       

       cout << ans2 << endl;
           
  



        }
}