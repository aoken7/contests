#include<bits/stdc++.h>
#include<atcoder/all>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto q:a)cout<<q<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    vector<ll> a(n), p(n), x(n);
    rep(i,0,n) cin >> a[i] >> p[i] >> x[i];

    ll ans = 1e9;
    rep(i,0,n){
        if(x[i]-a[i] > 0){
            ans = min(ans, p[i]);
        }
    } 
    if(ans == 1e9) ans = -1;
    put(ans);
}
