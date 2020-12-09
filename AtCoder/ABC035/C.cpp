#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto x:a)cout<<x<<' '; cout<<endl
using namespace std;
using ll = long long;

int main(){
    ll n, q; cin >> n >> q;
    vector<ll> a(n,0);

    rep(i,0,q){
        ll l,r; cin >> l >> r;
        l--; r;
        a[l]++;
        a[r]--;
    }

    rep(i,1,n){
        a[i] += a[i-1];
    }

    rep(i,0,n){
        if(a[i] % 2 == 0) cout << 0;
        else cout << 1;
    }cout << endl;
}