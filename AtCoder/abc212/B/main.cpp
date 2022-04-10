#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    string x;
    cin >> x;

    auto mod = [](char c){return c % 10;};
    
    rep(i,0,4) x[i] -= '0';

    if (x[0] == x[1] and x[1] == x[2] and x[2] == x[3] or 
        mod(x[0]+1) == mod(x[1]) and mod(x[1]+1) == mod(x[2]) and mod(x[2]+1) == mod(x[3])){
        put("Weak");
        return 0;
    }else{
        put("Strong");
    }
}
