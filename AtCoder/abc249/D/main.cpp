#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

ll naive(ll n, vector<ll> &a) {
    ll cnt = 0;
    rep(i, 0, n) {
        rep(j, 0, n) {
            rep(k, 0, n) {
                if (a[j] * a[k] == a[i]) {
                    cnt++;
                    cout << "(" << a[i] << "," << a[j] << "," << a[k] << "), ";
                    cout << "(" << i << "," << j << "," << k << ")" << endl;
                }
            }
        }
    }

    return cnt;
}

set<pair<ll, ll>> divisor(ll n) {
    set<pair<ll, ll>> ret;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ret.insert({i, n / i});
            // if (i * i != n) ret.insert({n / i, i});
        }
    }
    return ret;
}

set<ll> div(ll x) {
    set<ll> ret;
    ll n = x;
    for (ll i = 1; i * i <= n; i++) {
        if (x % i == 0) {
            ret.insert(i);
            ret.insert(x / i);
        }
    }
    return ret;
}

template <typename T>
void putl(T t) {
    for (auto x : t) cout << x << " ";
    cout << endl;
}

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i, 0, n) cin >> a[i];
    

    vector<ll> memo(*max_element(all(a)), 0);
    map<ll, ll> mp;
    rep(i, 0, n) memo[a[i]]++;// mp[a[i]]++;

    ll ans = 0;

    rep(i, 0, n) {
        auto divs = div(a[i]);
        for (auto x : divs) {
            ll j = memo[x];// mp[x];
            ll k = memo[a[i] / x]; // mp[a[i] / x];
            ans += 1 * j * k;
        }
    }

    put(ans);

    return 0;
    /*
    map<ll, ll> mp;
    for (auto x : a) {
        mp[x]++;
    }

    map<ll, set<pair<ll, ll>>> gcd;
    for (auto x : mp) {
        gcd[x.first] = divisor(x.first);
        // cout << x.first << ":" ;
        // for(auto z:gcd[x.first]){cout << "(" << z.first << "," << z.second <<
        // ") ";} cout << endl;
    }

    ll ans = 0;

    for (auto x : gcd) {
        ll tmp = 0;
        for (auto z : x.second) {
            cout << "(" << z.first << " " << z.second << "), ";
            tmp += mp[z.first] * mp[z.second] * 2;
            // cout << tmp << endl;
        }
        ans += tmp;
        cout << tmp << endl;
    }

    put(ans);

    // put(naive(n,a));
    */
}
