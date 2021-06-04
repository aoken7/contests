#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll d; cin >> d;
    vector<ll> a(d), b(d);
    rep(i,0,d) cin >> a[i];
    rep(i,0,d) cin >> b[i];

    ll ans = 1e18;
    ll sum = 0;

    rep(i,0,d){
        sum += a[i];
        if(sum >= b[i]) ans = min(ans, b[i]);
    }
    
    if(ans == 1e18) put(-1);
    else put(ans);
}
