//pdf見て回答
#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;

    vector<ll> a(n+1,0);
    rep(i, 1, n+1){
        a[i] += a[i-1] + i;
    }

    ll index = 0;
    rep(i, 0, n+1){
        if (a[i] >= n){
            index = i;
            break;
        }
    }

    ll ans = 0;

    rep(i, 0, index){
        if (a[index] - i == n) ans = i;
    }

    rep(i, 1, index+1) if(i != ans) put(i);
}