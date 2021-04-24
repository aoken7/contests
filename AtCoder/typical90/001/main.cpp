#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

template <typename T>
void putl(T t) {
    for (auto x : t) cout << x << " ";
    cout << endl;
}

int main(){
    ll n,l; cin >> n >> l;
    ll k; cin >> k;
    vector<ll> a(n);
    rep(i,0,n) cin >> a[i];

    vector<pair<ll,ll>> b(n-1,{0,0});
    rep(i,0,n-1){
        b[i] = {a[i+1] - a[i], i};
    }

    sort(all(b), greater<pair<ll,ll>>());

    for(auto x:b){
        cout << "(" << x.first << "," << x.second << ") ";
    }cout << endl;
}
