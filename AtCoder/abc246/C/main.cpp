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
    ll n, k, x;
    cin >> n >> k >> x;
    vector<ll> a(n);


    rep(i,0,n){
        cin >> a[i];
        ll num = min(max((a[i] / x),1LL), k);
        if (a[i] >= x){
            a[i] -= x * num;
            k -= num;
        }
    }

    sort(all(a),greater<ll>());

    ll ans = 0;

    rep(i,k,n){
        ans += a[i];
    }

    put(ans);
}
