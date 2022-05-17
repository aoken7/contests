#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

template <typename T>
void putl(T t) {
    for (auto x : t) cout << x << " ";
    cout << endl;
}

int main(){
    ll n;
    cin >> n;
    vector<ll> h(n);
    rep(i,0,n) cin >> h[i];

    vector<ll> dp(n+1,ll(1e9));
    dp[0] = 0;

    rep(i,0,n-1){
        dp[i+1] = min(dp[i+1], dp[i] + abs(h[i]-h[i+1]));
        if(i > n-2) break;
        dp[i+2] = min(dp[i+2], dp[i] + abs(h[i]-h[i+2]));
    }
    
    put(dp[n-1]);
}
