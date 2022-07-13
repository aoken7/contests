#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll a, b, c;
    cin >> a >> b >> c;

    vector<ll> v = {a,b,c};
    sort(all(v));

    if(b == v[1]){
        put("Yes");
    }else{
        put("No");
    }
}
