#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

ll a, b, c;

int main() {
    cin >> a >> b >> c;

    if (a < powl(c, b))
        put("Yes");
    else
        put("No");
}
