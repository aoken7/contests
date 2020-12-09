
#include<bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
using namespace std;
using ll = long long;

ll gcd(ll a, ll b)
{
   if (a%b == 0)
   {
       return(b);
   }
   else
   {
       return(gcd(b, a%b));
   }
}

int main(){
	ll n; cin >> n;
    vector<ll> a(n); rep(i,n) cin >> a[i];

    ll ans = a[0];
    for(ll i = 1; i < n; i++){
        ans = gcd(ans, a[i]);
    }

    put(ans);
}
