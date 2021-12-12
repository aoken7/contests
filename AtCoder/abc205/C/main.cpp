#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll a, b, c;
    cin >> a >> b >> c;

    if (a == b or (abs(a) == abs(b) and c % 2 == 0)) {
        put("=");
    } else if (a >= 0 and b >= 0 or c % 2 == 0) {
        if (abs(a) > abs(b)) {
            put(">");
        } else {
            put("<");
        }
    } else if(a >= 0 and b < 0){
        put(">");
    }else{
        put("<");
    }
}
