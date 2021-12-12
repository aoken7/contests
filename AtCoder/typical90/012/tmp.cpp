#include <bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout << fixed << i << endl
using namespace std;
using ll = long long;

int main() {
    vector<vector<int>> data(3,vector<int>(4));

    rep(i,0,3){
        rep(j,0,4){
            cout << data[i][j] << " ";
        }
        cout << endl;
    }
}