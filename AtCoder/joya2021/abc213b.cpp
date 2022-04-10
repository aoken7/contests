#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    map<ll,ll> mp;
    rep(i,0,n){
        ll a; cin >> a;
        mp[a] = i + 1;
    }

    auto sec = prev(prev(mp.end()));

    put(sec->second);
}