#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto x:a)cout<<x<<' '; cout<<endl
using namespace std;
using ll = long long;

int main(){
    ll n, a, b; cin >> n >> a >> b;
    vector<ll> x(n); rep(i,0,n) cin >> x[i];

    ll ans = 0;

    rep(i,0,n-1){
        if((x[i+1] - x[i]) * a < b){
            ans += (x[i+1] - x[i]) * a;
        }else{
            ans += b;
        }
    }

    put(ans);
}

/*
*貪欲にやればよさそう
*/