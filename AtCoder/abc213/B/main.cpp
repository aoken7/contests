#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    vector<pair<ll,ll>> a(n);
    rep(i,0,n){
        ll tmp; cin >> tmp;
        a[i] = {tmp,i+1};
    }

    sort(all(a),greater<pair<ll,ll>>());

    put(a[1].second);
}
