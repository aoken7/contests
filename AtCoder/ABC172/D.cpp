//他人の回答見て回答
#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto x:a)cout<<x<<' '; cout<<endl
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;

    ll ans = 0;
    for(ll i=1; i<=n; i++){
        ans += (n/i) * (n/i+1) * i/2;
    }
    put(ans);
}