#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll q;
    cin >> q;

    deque<pair<ll, ll>> st;

    rep(i, 0, q) {
        ll a;
        cin >> a;
        if (a == 1) {
            ll x, c;
            cin >> x >> c;
            st.push_back(make_pair(x, c));
        } else {
            ll c;
            cin >> c;
            auto top = st.front();
            st.pop_front();
            if (top.second > c) {
                top.second -= c;
                st.push_front(top);
                put(top.first * c);
            } else if (top.second == c) {
                put(top.first * c);
            } else {
                ll sum = 0;
                for (; top.second < c;) {
                    sum += top.second * top.first;
                    c -= top.second;
                    top = st.front();
                    st.pop_front();
                }
                top.second -= c;
                sum += top.first * c;
                st.push_front(top);
                put(sum);
            }
        }
    }
}
