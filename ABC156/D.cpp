#include<bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
using namespace std;
using ll = long long;

ll mod = 1e9+7;

long long modinv(long long a, long long m) {
    long long b = m, u = 1, v = 0;
    while (b) {
        long long t = a / b;
        a -= t * b; swap(a, b);
        u -= t * v; swap(u, v);
    }
    u %= m;
    if (u < 0) u += m;
    return u;
}

ll pow_kai(ll a, ll n){
  ll x = 1;
  while(n > 0){
    if(n&1){
      x = x*a % mod;
    }
    n >>= 1;
    a = a*a % mod;
  }
  return x;
}

ll modCon(ll n, ll r){
    ll ret = 1;
    for(ll i=1; i<r+1; i++){
        ret = ((ret * (n-i+1)) % mod * modinv(i, mod)) % mod;
    }
    return ret;
}

int main(){
    ll n, a, b; cin >> n >> a >> b;
    ll ans;
    ans = pow_kai(2,n);
    ans -= modCon(n,a);
    if (ans < 0) ans += mod;
    ans -= modCon(n,b);
    if (ans < 0) ans += mod;
    put(ans-1);
}