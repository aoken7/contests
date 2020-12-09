//pdf見て回答
//ワーシャルフロイド法

#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
using namespace std;
using ll = long long;

void warshall_floyd(int n, vector<vector<ll>>& d){
    for(ll k=0; k<n; k++){
        for(ll i=0; i<n; i++){
            for(ll j=0; j<n; j++){
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]); 
            }
        }
    }
}

int main(){
    ll h, w; cin >> h >> w;
    vector<vector<ll>> c(10,vector<ll>(10));
    vector<vector<ll>> a(w,vector<ll>(h));

    rep(i,0,10) rep(j,0,10) cin >> c[j][i];
    rep(i,0,h) rep(j,0,w) cin >> a[j][i];

    warshall_floyd(10,c);

    ll ans = 0;

    rep(i,0,h){
        rep(j,0,w){
            if(a[j][i] > -1){
                ans += c[1][a[j][i]];
            }
        }    
    }
    
    put(ans);
}