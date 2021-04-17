//pdf観た
//Bitごとに独立に計算できるかなと思ったけどいい感じに実装出来なかった
#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll a, b;
    cin >> a >> b;

    ll ans = 0;

    if(a == b){
        ans = a;
    }else if (a % 2 == 0) {
        if ((b - a + 1) % 2 == 0) {
            ans = 0;
        }else{
            ans = (1 xor b);
        }
    }else{
        if ((b - a) % 2 == 0) {
            ans = a;
        }else{
            ans = (a xor b);
        }
    }

    put(ans);
}
