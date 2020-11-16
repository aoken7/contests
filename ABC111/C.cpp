#include <bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout << fixed << i << endl
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    rep(i, n) cin >> v[i];

    map<ll, ll> mp1, mp2;
    map<ll, ll> rmp1, rmp2;

    for (ll i = 0; i < n; i++) {
        if (i % 2 == 0) {
            mp1[v[i]]++;
        } else {
            mp2[v[i]]++;
        }
    }

    vector<ll> v1, v2;
    for (auto x : mp1) {
        v1.push_back(x.second);
        rmp1[x.second] = x.first;
    }
    for (auto x : mp2) {
        v2.push_back(x.second);
        rmp2[x.second] = x.first;
    }

    //v1.push_back(0);
    //v2.push_back(0);

    sort(all(v1),greater<ll>());
    sort(all(v2),greater<ll>());

    ll ans = 0;
    
    if(rmp1[v1[0]] != rmp2[v2[0]]){
        ans = (n/2-v1[0]) + (n/2-v2[0]);
    }else{
        ans = (n/2-v1[0]) + (n/2-v2[1]);
        ans = min(ans, (n/2-v1[1]) + (n/2-v2[0]));
    }

    put(ans);
}