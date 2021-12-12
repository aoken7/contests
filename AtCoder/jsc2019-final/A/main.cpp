//pdf見た
#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n, m; cin >> n >> m;
    vector<ll> a(n), b(m);
    rep(i,0,n) cin >> a[i];
    rep(i,0,m) cin >> b[i];

    vector<pair<ll,ll>> sum(2e6+1, {-1,-1});

    rep(i,0,n){
        rep(j,0,m){
            ll w = a[i] + b[j];
            
            if(sum[w] != make_pair(-1LL,-1LL)){
                cout << i << " " << j << " " << sum[w].first << " " << sum[w].second << endl;
                return 0;
            }
            sum[w] = make_pair(i,j);
        }
    }

    put(-1);
}
