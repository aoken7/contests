#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto q:a)cout<<q<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n, m; cin >> n >> m;
    
    if(m==0){
        put(1);
        return 0;
    }

    vector<ll> a(m);
    rep(i,0,m) cin >> a[i], a[i]--;

    sort(all(a));

    vector<ll> diff(m+1);
    diff[0] = a[0];
    rep(i,0,m-1){
        diff[i+1] = a[i+1]-a[i]-1;
    }
    diff[m] = n - a[m-1]-1;

    ll minn = 1e9+1;
    rep(i,0,m+1){
        if(diff[i]==0) continue;
        minn = min(diff[i], minn);
    }
    
    ll ans = 0;
    for(auto x:diff){
        if(x == 0) continue;
        ans += ceil(x/(double)minn);
    }
    put(ans);
}
