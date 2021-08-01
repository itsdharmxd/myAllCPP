#include <iostream>
#include <string>
#include<vector>
#include <cstdio>
#include <unordered_map>
using namespace std;

const int MAX_SIZE = 1000001;

// isPrime[] : isPrime[i] is true if number is prime
// prime[] : stores all prime number less than N
// SPF[] that store smallest prime factor of number
// [for Exp : smallest prime factor of '8' and '16'
// is '2' so we put SPF[8] = 2 , SPF[16] = 2 ]


// function generate all prime number less then N in O(n)
void manipulated_seive(int N,int y)
{
    vector<int> isprime(MAX_SIZE, true);
    vector<int> prime;
    vector<int> SPF(MAX_SIZE);
    // 0 and 1 are not prime
    isprime[0] = isprime[1] = false;

    // Fill rest of the entries
    for ( int i = 2; i <= N; i++)
    {
        // If isPrime[i] == True then i is
        // prime number
        if (isprime[i])
        {
            // put i into prime[] vector
            prime.push_back(i);

            // A prime number is its own smallest
            // prime factor
            SPF[i] = i;
        }

      
        for ( int j = 0;
             j < (int)prime.size() &&
             i * prime[j] <= N && prime[j] <= SPF[i];
             j++)
        {
            isprime[i * prime[j]] = false;

            // put smallest prime factor of i*prime[j]
            SPF[i * prime[j]] = prime[j];
        }
    }
    // for (int i = 0; i < prime.size();i++)
    //     cout << prime[i] << " ";
        if (prime.size() <= y)
        {
            cout << "Chef\n";
        }
        else
        {
            cout << "Divyam\n";
        }
}

int main()
{
    // cout << "if";
    // cout << func(11);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif
    int t;
      
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        manipulated_seive(x,y);
       

        
    }
}