
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(a, b, c) for (ll a = b; a < c; a++)
#define repr(a, b, c) for (ll a = b; a >= c; a--)
#define fst first
#define snd second
#define pb push_back
#define pii  pair<ll,ll>
#define vi   vector<ll>
#define all(c) ((c).begin()), ((c).end())
#define test()                        \
	freopen("input.txt", "r", stdin); \
	freopen("output.txt", "w", stdout);
#define fast()                    \
	ios_base::sync_with_stdio(0); \
	cin.tie(0);                   \
	cout.tie(0);
#define LOG2(X) ((unsigned)(8 * sizeof(unsigned long long) - __builtin_clzll((unsigned long long)(X)) - 1))

const int N = 1000000;
 ll spf[N+1];

void prespf(){
	 for(ll i=2;i<=N;i++){
	 if(!spf[i]){
spf[i] = i;
for (ll j = i * i; j <=N; j += i){

if(!spf[j])
spf[j] = i;
}
}
}
}

vector<pii> getfactors(int x){
vector<pii> ans;
  while (x>1)
  {
int p = spf[x];
 int c = 0;
 
	 while (!(x%p))
{
 x /= p;
 c++;
 }
 ans.pb({p, c});
  }
return ans;
}
vi segmentedseive(ll l, ll r){
   if(l==1)
   l++;
   vector<ll> primes(r - l + 1,1);

   for (ll i = 2; i * i <= r; i++)
   {
   ll num = i * ((l + i - 1) / i);

   for (ll j = max(i * i, num); j <= r;j+=i){
   primes[j - l] = 0;
   }
   }
   vector<ll> ans;
   for (ll i = 0; i < primes.size(); i++)
   {
		  if(primes[i])
  ans.pb(i + l);
   }
   return ans;
}

ll eulars_totient(ll n){
	vector<pii> pri = getfactors(n);

	ll ans = n;
	for(pii p:pri){
		ans -= (ans/p.first);
	}
	return ans;
}





int solve()
{
   prespf();

   cout << eulars_totient(23);

   return 0;
}

int main()
{
#ifndef ONLINE_JUDGE
	test()
#endif // !ONLINE_JUDGE
		int t = 1;
	//cin >> t;

	while (t--)
	{
		solve();
	}
	return 0;
}