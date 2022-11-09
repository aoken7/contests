#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for(long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

std::vector<ll> Eratosthenes(const ll N) {
    std::vector<bool> is_prime(N + 1);
    for(ll i = 0; i <= N; i++) {
        is_prime[i] = true;
    }
    std::vector<ll> P;
    for(ll i = 2; i <= N; i++) {
        if(is_prime[i]) {
            for(ll j = 2 * i; j <= N; j += i) {
                is_prime[j] = false;
            }
            P.emplace_back(i);
        }
    }
    return P;
}

template <typename T>
void putl(T t) {
    for(auto x : t) cout << x << " ";
    cout << endl;
}

ll n;
vector<ll> prime;

bool solve(ll idx, ll i) {
    long double tmp = (long double)prime[idx] * (long double)prime[i] *
                      (long double)prime[i] * (long double)prime[i];
    return tmp <= n;
}

int megru_search(ll i, ll MAX) {
    ll ok = -1;  //最小値求めるときは ok = MAX
    ll ng = i;   //                   ng = -1
    while(abs(ok - ng) > 1) {
        ll mid = (ok + ng) / 2;
        if(solve(mid, i)) {
            ok = mid;
        } else {
            ng = mid;
        }
    }
    return ok;
}

int main() {
    cin >> n;
    prime = Eratosthenes(powl(n, 1 / 3.0));

    if(n <= 3) {
        put(0);
        return 0;
    }

    ll ans = 0;
    ll ans_nibu = 0;
    // set<ll> st;
    for(ll i = 1; prime[i] * prime[i] * prime[i] < n and i < prime.size();
        i++) {
        ll nibu = megru_search(i, i) + 1;
        ll jtmp = 0;
        ans_nibu += nibu;
        continue;
        rep(j, 0, i) {
            ll tmp = prime[j] * prime[i] * prime[i] * prime[i];
            if(tmp <= n) {
                ans++;
                // st.insert(tmp);

                jtmp = j;
            }
        }
        printf("%lld, %lld\n", ans, ans_nibu);
        if(i > 5000) break;
    }
    put(ans_nibu);
    // put(st.size());
}
