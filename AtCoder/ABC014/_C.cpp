#include<bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    vector<ll> a(n), b(n);
    rep(i,n) cin >> a[i] >> b[i];

    //いモス法
    vector<ll> color(1e6+1,0);
    rep(i,n){
        color[a[i]]++;
        color[b[i]+1]--;
    }
    
    for(ll i=1; i<1e6+1; i++){
        color[i] += color[i-1];
    }

    put(*max_element(all(color)));
}