#include<bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
using namespace std;
using ll = long long;

int main(){
    ll n, w; cin >> n >> w;
    vector<ll> s(n), t(n), p(n);
    rep(i,n) cin >> s[i] >> t[i] >> p[i];

    vector<ll> cnt(2e5,0);

    for(ll i=0; i<n; i++){
        cnt[s[i]]+=p[i];
        cnt[t[i]]-=p[i];
    }

    for(ll i=0; i<2e5; i++){
        if (0 < i) cnt[i] += cnt[i-1];
    }

    ll maxn = 0;
    for(ll i=0; i<n; i++){
        maxn = max(maxn, cnt[i]);
    }

    //for(ll i=0; i<11; i++) cout << cnt[i] << " "; cout << endl;

    if(maxn <= w){
        put("Yes");
    }else{
        put("No");
    }
}