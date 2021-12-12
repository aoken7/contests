#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    while(1) {
        ll d, w;
        cin >> d >> w;
        if (d == w and w == 0) break;

        vector<vector<ll>> e(d,vector<ll>(w));
        rep(i,0,d){
            rep(j,0,w){
                cin >> e[i][j];
            }
        }
        
        
    }
}