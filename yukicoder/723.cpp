#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto x:a)cout<<x<<' '; cout<<endl
using namespace std;
using ll = long long;

int main(){
    ll n, x; cin >> n >> x;
    vector<ll> a(n);
    rep(i,0,n) cin >> a[i];

    map<ll,ll> mp;

    rep(i,0,n){
        mp[a[i] + 2]++;
    }

    a.push_back(a[0]);
    rep(i,0,n){
        mp[a[i] + a[i+1]]+=2;
    }

    cout << mp[x] << endl;
}