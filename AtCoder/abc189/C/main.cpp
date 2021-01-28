#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define debug(i) cerr<<fixed<<i<<endl
#define debugl(a) for(auto x:a)cerr<<x<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    vector<ll> a(n); rep(i,0,n) cin >> a[i];

    ll ans = 0;
    
    rep(i,0,n){
        ll minn = 1e9;
        rep(j,i,n){
            minn = min(minn,a[j]);
            ans = max(ans,minn*(j-i+1));
        }
    }

    put(ans);
}
