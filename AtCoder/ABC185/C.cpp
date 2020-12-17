#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto x:a)cout<<x<<' '; cout<<endl
using namespace std;
using ll = long long;

const int MOD = 1000000007;  // 素数

int main(){
    ll N, K; cin >> N;
    K = 11;

    vector<vector<long long>> p(N + 1, vector<long long>(K + 1, 0));

    p[0][0] = 1;
    rep(i,1,N+1){
        rep(j,1,K+1){
            p[i][j] += p[i-1][j-K];
        }
    }

    cout << p[N][K] << endl;
    for(auto x:p){
        for(auto y:x){
            cout << y << " ";
        }cout << endl;
    }

    return 0;

    //vector<vector<long long>> p(N + 1, vector<long long>(K + 1, 0));
    p[0][0] = 1;
    for (long long n = 1; n < N + 1; n++) {
        for (long long k = 1; k < K + 1; k++) {
            p[n][k] = (p[n - k][k]);
            /*
            if (n - k >= 0) {
                p[n][k] = (p[n - 1][k - 1] + p[n - k][k]) % MOD;
            } else {
                p[n][k] = p[n - 1][k - 1];
            }*/
        }
    }
    cout << p[N][K] << endl;
}