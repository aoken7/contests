#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll n, a, b;
    cin >> n >> a >> b;

    vector<vector<char>> v(n * a, vector<char>(n * b));

    rep(i, 0, n) {
        rep(j, 0, n) {
            rep(k, 0, a) {
                rep(l, 0, b) {
                    if (i % 2 == 1 and j % 2 == 0)
                        v[k + a * i][l + b * j]= '#';
                    else if(i % 2 == 0 and j % 2 == 1)
                        v[k + a * i][l + b * j]= '#';
                    else
                        v[k + a * i][l + b * j] = '.';
                }
            }
        }
    }

    for(auto x: v){
        for(auto y : x){
            cout << y;
        }
        cout << endl;
    }
}
