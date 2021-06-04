#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n, x, y, z;
    cin >> n >> x >> y >> z;
    vector<ll> a(n), b(n);
    rep(i,0,n) cin >> a[i] >> b[i];

    ll ans = 0;

    rep(i,0,n){
        if(a[i] >= x and b[i] >= y and a[i] + b[i] >= z) ans++;
    }

    put(ans);
}
