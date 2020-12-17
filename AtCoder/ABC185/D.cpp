#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto x:a)cout<<x<<' '; cout<<endl
using namespace std;
using ll = long long;

int main(){
    ll n, m; cin >> n >> m;
    vector<ll> a(m); rep(i,0,m) cin >> a[i];

    if(n == m){ 
        put(0);
        return 0;
    } 
    if(m == 0){
        put(1);
        return 0;
    }

    sort(all(a));
    ll minl = 1e9;
    rep(i,0,m-1) {
        minl = min(minl, a[i+1] - a[i]-1);
    }
    if(a[0] > 1) minl = min(minl, a[0]-1);
    if (n-a[m-1] > 0) minl = min(minl, n-a[m-1]); 

    minl = (max(minl, 1LL));

    ll ans = 0;
    if(a[0] > 1) ans += ceill((a[0]-1) / (long double)minl);
    rep(i,0,m-1){
        ans += ceill((a[i+1] - a[i]-1) / (long double)minl);
        //put(ans);
        //put((a[i+1]-a[i]-1)/minl);
    }
    if(n-a[m-1] > 0) ans += ceill((n-a[m-1]) / (long double)minl);
    put(ans);
}