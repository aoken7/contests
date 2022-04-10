#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    vector<ll> s(n), t(n);

    map<string,ll> mp;

    rep(i,0,n){
        string s,t;
        cin >> s >> t;
        mp[s+","+t]++;
    }

    for(auto x:mp){
        if(x.second > 1){
            put("Yes");
            return 0;
        }
    }

    put("No");
}
