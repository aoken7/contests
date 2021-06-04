#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

// bで1埋め
unsigned long long to_bit(ll b){
    unsigned long long bin = 0;
    rep(i,0,b){
        bin <<= 1;
        bin |= 0x1;
    }
    return bin;
}

string bit_to_string(unsigned long long x, unsigned long long k){
   string ans = "";
   rep(i,0,k){
       auto bin = x & 0x1;
       if(bin == 0) ans.push_back('a');
       else ans.push_back('b');
       x >>= 1;
    }
    reverse(all(ans));
    return ans;
}

int main() {
    unsigned long long a, b, k;
    cin >> a >> b >> k;

    auto start = to_bit(b);
    auto end = start + (k);

    auto ans = bit_to_string(end,k);

    put(ans);
}
