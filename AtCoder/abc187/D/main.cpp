#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define debug(i) cerr<<fixed<<i<<endl
#define debugl(a) for(auto x:a)cerr<<x<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    vector<pair<ll,pair<ll,ll>>> x(n);

    ll aoki = 0;
    rep(i,0,n){
        ll a, b, c;
        cin >> a >> b;
        c = a*2 + b;
        x[i] = {c,{a,b}};
        aoki += a;
    }

    sort(all(x),greater<pair<ll,pair<ll,ll>>>());

    ll takahasi = 0;
    rep(i,0,n){
        if(aoki < takahasi){
            put(i);
            return 0;
        }

        takahasi += x[i].second.first + x[i].second.second;
        aoki -= x[i].second.first;
    }

    put(n);
}
