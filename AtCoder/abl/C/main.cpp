#include<bits/stdc++.h>
#include<atcoder/all>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto q:a)cout<<q<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;


int main(){
    ll n, m; cin >> n >> m;
    
    ll ans = 0;
    atcoder::dsu uf(n+1);

    rep(i,0,n){
        ll a, b; cin >> a >> b;
        if(!uf.same(a,b)){
            ans++;
            uf.merge(a,b);
        }
    }

    put(ans);
}
