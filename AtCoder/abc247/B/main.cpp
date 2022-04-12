#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    map<string,ll> mp;
    vector<string> s(n), t(n);
    rep(i,0,n){
        cin >> s[i] >> t[i];
    }

    rep(i,0,n){
        if (s[i] != t[i]){
            mp[s[i]]++;
            mp[t[i]]++;
        }else{
            mp[s[i]]++;
        }
    }


    ll cnt = 0;
    rep(i,0,n){
        if(mp[s[i]] > 1 and mp[t[i]] > 1){
            put("No");
            return 0;
        }
    }
    put("Yes");
}
