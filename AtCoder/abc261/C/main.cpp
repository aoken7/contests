#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll n; cin >> n;
    vector<string> s(n);
    rep(i,0,n) cin >> s[i];

    map<string,ll> mp;

    rep(i,0,n) {
        if (mp.count(s[i])){
            string t = s[i] + "(" + to_string(mp[s[i]]) + ")";
            put(t);
            mp[s[i]]++;
        }else{
            put(s[i]);
            mp[s[i]]++;
        }
    }
}
