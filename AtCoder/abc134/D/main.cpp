//pdfみた
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
    vector<ll> a(n);
    rep(i,0,n) cin >> a[i];

    vector<ll> b(n,0);

    for(ll i=n; i>0; i--){
        ll cnt = 0;
        for(ll j=i; j<=n; j+=i){
            cnt += b[j-1];
        }
        if(cnt % 2 != a[i-1]){
            b[i-1]++;
        }
    }
    
    //debugl(b);

    for(ll i=n; i>0; i--){
        ll cnt = 0;
        for(ll j=i; j<=n; j+=i){
            cnt += b[j-1];
        }
        if(cnt % 2 != a[i-1]){
            put(-1);
            return 0;
        }
    }

    put(accumulate(all(b),0LL));
    rep(i,0,n){
        if(b[i]) cout << i+1 << " ";
    }
    cout << endl;
}
