#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;
    vector<ll> t(n);
    vector<string> s(n);
    rep(i,0,n) cin >> s[i] >> t[i];

    map<string,ll> memo;
    vector<pair<ll,string>> st;

    ll maxp = 0;
    ll idx = -1;

    rep(i,0,n){
        if(memo.count(s[i])==0){
            st.push_back({t[i],s[i]});
            memo[s[i]] = i;
            if(t[i] > maxp){
                maxp = t[i];
                idx = i;
            }
        }
    }

    put(idx+1);
}
