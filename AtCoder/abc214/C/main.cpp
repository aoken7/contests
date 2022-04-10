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
    ll n; cin >> n;
    vector<ll> s(n), t(n);
    rep(i,0,n) cin >> s[i];
    rep(i,0,n) cin >> t[i];

    rep(i,0,2*n){
        if(t[(i+1)%n] > t[i%n] + s[i%n]){
            t[(i+1)%n] = t[i%n] + s[i%n];
        }
    }

    for(auto x:t) put(x);
}
