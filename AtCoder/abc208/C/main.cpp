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
    ll n, k; cin >> n >> k;
    vector<pair<ll,ll>> a(n);
    rep(i,0,n){
        ll tmp; cin >> tmp;
        a[i] = {tmp, i};
    }

    sort(all(a));

    vector<ll> b(n,0);

    if(k >= n){
        ll tmp = k / n;
        rep(i,0,n){
            b[i] += tmp;
        }
        k %= n;
    }

    if(k > 0){
        rep(i,0,k){
            b[i]++;
        }
    }

    map<ll,ll> mp;
    rep(i,0,n){
        mp[a[i].second] = b[i];
    }

    for(auto x:mp){
        put(x.second);
    }
}
