#include<bits/stdc++.h>
#include<atcoder/all>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto q:a)cout<<q<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll t; cin >> t;
    rep(i,0,t){
        ll l,r;
        cin >> l >> r;
        if(l == 0 and r == 0){
            put(1);
            continue;
        }
        if(l == r){
            
            put(0);
            continue;
        }
        ll start = 2 * l;
        if(start > r){
            put(0);
            continue;
        }
        ll end = r;
        ll n = end - start + 1;
        ll ans = n + n * (n-1) / 2;
        put(ans);
    }
}
