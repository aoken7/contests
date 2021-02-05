#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto q:a)cout<<q<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

set<ll> f(ll x){
    set<ll> ret;
    rep(i,1,sqrt(x)+1){
        if(x % i == 0){
            if(x/i % 2 == 1)
                ret.insert(x/i);
            if(i % 2 == 1)
                ret.insert(i);
        }
    }
    return ret;
}

int main(){
    ll n; cin >> n;

    ll ans = 0;
    auto e = f(n);
    ans = e.size();

    put(ans*2);
}
