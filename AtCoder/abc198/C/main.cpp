#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll r, x, y;
    cin >> r >> x >> y;

    long double len = sqrtl(x * x + y * y);
    
    if(len < r) put(2); 
    else put(ll(ceill(len / r)));
}
