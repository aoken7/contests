//pdf見た、なんもわからん…
#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto x:a)cout<<x<<' '; cout<<endl
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    
    ll res = n;
    rep(i,0,n+1){
        ll cc = 0;
        ll t = i;
        while(t > 0) cc += t%6, t /= 6;
        t = n-i;
        while(t > 0) cc += t%9, t /= 9;
        if (res > cc) res = cc;
    }

    put(res);
}