#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll a, b; cin >> a >> b;
    ll c, d; cin >> c >> d;

    ll ans = -1e9;

    rep(i,a,b+1){
        rep(j,c,d+1){
            ans = max(ans, i - j);
        }
    }

    put(ans);
}
