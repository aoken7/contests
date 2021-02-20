//pdf見た
#include<bits/stdc++.h>
#include<atcoder/all>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto q:a)cout<<q<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

set<ll> prime(ll x){
    set<ll> st;
    for(ll i=1; i*i<=x; i++){
        if(x%i==0){
            st.insert(x/i);
            st.insert(i);
        }
    }
    return st;
}

int main(){
    ll n, m; cin >> n >> m;
    
    ll ans = 0;
    auto tmp = prime(m);
    for(auto x:tmp){
        if(x*n <= m) ans = max(ans,x);
    }

    put(ans);
}
