#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll n, w;
    cin >> n >> w;
    vector<ll> a(n);
    rep(i, 0, n) cin >> a[i];

    set<ll> st;

    sort(all(a));

    rep(i, 0, n) {
        ll d1 = a[i];
        if(d1 > w) break;
        st.insert(d1);

        rep(j, i + 1, n) {
            ll c1 = a[i] + a[j];
            if(c1 > w) break;
            st.insert(c1);
            ll d2 = a[j];
            st.insert(d2);
            if(d2 > w) break;

            rep(k, j + 1, n) {
                ll b1 = a[i] + a[j] + a[k];
                if (b1 > w) break;
                ll c2 = a[i] + a[k];
                ll c3 = a[j] + a[k];

                if (c2 > w or c3 > w) break;

                ll d3 = a[k];

                st.insert(b1);
                st.insert(c2);
                st.insert(c3);
                st.insert(d3);
            }
        }
    }

    ll ans = 0;
    for (auto x : st) {
        if (x <= w) {
            ans++;
        }
    }

    put(ans);
}
