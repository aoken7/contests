#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define debug(i) cerr<<fixed<<i<<endl
#define debugl(a) for(auto x:a)cerr<<x<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n;
    ll x;
    cin >> n >> x;
    ll alc = 0;
    vector<ll> v(n), p(n);
    rep(i,0,n) cin >> v[i] >> p[i];

    rep(i,0,n){
        alc += v[i] * p[i];
        if(alc > x * 100){
            put(i+1);
            return 0;
        }
    }
    put(-1);
}
