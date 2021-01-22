#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define debug(i) cerr<<fixed<<i<<endl;
#define debugl(a) for(auto x:a)cerr<<x<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

ll fun(ll x){
    ll cnt = 0;
    rep(i,1,x+1){
        if(x % i == 0) cnt++;
    }
    return cnt;
}

int main(){
    ll n; cin >> n;

    ll ans = 0;
    rep(i,1,n+1){ 
        if(fun(i) == 8 and i % 2 == 1) ans++;
    }

    put(ans);
}
