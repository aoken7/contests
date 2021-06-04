#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n, k; cin >> n >> k;
    vector<pair<ll,ll>> a(n+1,{0,0});
    rep(i,0,n) cin >> a[i+1].first >> a[i+1].second;

    sort(all(a));

    rep(i,0,n){
        if(k < a[i+1].first - a[i].first){
            put(a[i].first+k);
            return 0;
        }
        k -= a[i+1].first - a[i].first;
        k += a[i+1].second;
        
    }

    put(a[n].first + k);
}
