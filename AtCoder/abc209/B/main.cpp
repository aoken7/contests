#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n, x; cin >> n >> x;
    vector<ll> a(n);
    rep(i,0,n) cin >> a[i];

    ll cnt = 0;
    rep(i,0,n){
        if(i % 2 == 0) cnt += a[i];
        else cnt += a[i] - 1;
    }

    if(cnt <= x) put("Yes");
    else put("No");
}   
