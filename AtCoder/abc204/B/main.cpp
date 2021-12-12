#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    vector<ll> a(n);
    rep(i,0,n) cin >> a[i];

    ll ans = 0;
    rep(i,0,n){
        if(a[i] > 10){
            ans += a[i] - 10;
        }
    }

    put(ans);
}
