//解説見て解答

#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define debug(i) cerr<<fixed<<i<<endl
#define debugl(a) for(auto x:a)cerr<<x<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n, c_plan; cin >> n >> c_plan;
    vector<ll> a(n), b(n), c(n);
    
    //rep(i,0,n) cin >> a[i] >> b[i] >> c[i], a[i]--, b[i]--;

    map<ll,ll> mp;
    rep(i,0,n){
        ll a, b, c;
        cin >> a >> b >> c;
        mp[a] += c;
        mp[b+1] -= c;
    }

    ll s = 0, ans = 0, pre = 0;
    for(auto x:mp){
        ans += min(c_plan, s) * (x.first-pre);
        s += x.second;
        pre = x.first;
    }

    //for(auto x:mp) cout << x.second << " "; cout << endl;

    put(ans);
}
