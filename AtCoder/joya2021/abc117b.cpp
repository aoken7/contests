#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    vector<ll> l(n);
    rep(i,0,n) cin >> l[i];

    sort(all(l),greater<ll>());

    ll sum = accumulate(all(l),0LL);
    sum -= l[0];

    if (sum > l[0]) put("Yes");
    else put("No");
}