
#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto x:a)cout<<x<<' '; cout<<endl
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    vector<ll> a(n);
    rep(i,0,n) cin >> a[i];

    sort(all(a));

    vector<ll> sum(n,0);
    sum[0] = a[0];
    rep(i,1,n) sum[i] = sum[i-1] + a[i]; 

    ll ans = 0;


    rep(i,0,n){
        ll tmp = a[i] * (n-i-1);
        tmp -= sum[n-1] - sum[i];
        ans += abs(tmp);
    }
    put(ans);
}