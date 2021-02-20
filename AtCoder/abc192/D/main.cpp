#include <bits/stdc++.h>
#include <atcoder/all>
#define all(a) a.begin(), a.end()
#define put(i) cout << fixed << i << endl
#define putl(a)                        \
    for (auto q : a) cout << q << ' '; \
    cout << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;


class Radix {
   private:
    const char* s;
    ll a[128];

   public:
    Radix(const char* s = "0123456789ABCDEF") : s(s) {
        ll i;
        for (i = 0; s[i]; ++i) a[(int)s[i]] = i;
    }
    std::string to(long long p, int q) {
        ll i;
        if (!p) return "0";
        char t[64] = {};
        for (i = 62; p; --i) {
            t[i] = s[p % q];
            p /= q;
        }
        return std::string(t + i + 1);
    }
    std::string to(const std::string& t, int p, int q) {
        return to(to(t, p), q);
    }
    long long to(const std::string& t, int p) {
        ll i;
        long long sm = a[(int)t[0]];
        for (i = 1; i < (int)t.length(); ++i) sm = sm * p + a[(int)t[i]];
        return sm;
    }
};

int main() {
    string x;
    ll m;
    cin >> x >> m;
    
    Radix r;
    ll ans = 0;

    string y = x;
    sort(all(y));

    for(ll i=y[y.size()-1]-'0'+1;; i++){
        put(r.to(m,i));
        if(stol(r.to(m,i)) < stol(x)){
            break;
        }
        ans++;
    }
    put(ans);
}
