#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll n; cin >> n;
    vector<string> s(n);
    rep(i,0,n) cin >> s[i];

    rep(i,0,n){
        rep(j,0,n){
            if(s[i][j] == 'W' and s[j][i] != 'L' or
                s[i][j] == 'L' and s[j][i] != 'W' or
                s[i][j] == 'D' and s[j][i] != 'D'){
                    put("incorrect");
                    return 0;
                }
        }
    }

    put("correct");
}
