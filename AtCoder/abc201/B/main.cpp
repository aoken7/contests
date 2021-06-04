#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    vector<pair<ll,string>> st(n);
    rep(i,0,n) cin >> st[i].second >> st[i].first;

    sort(all(st), greater<pair<ll,string>>());

    put(st[1].second);
}
