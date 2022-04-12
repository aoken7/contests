#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n;
    cin >> n;
    vector<ll> p(n);
    rep(i,0,n) cin >> p[i];

    map<ll,ll> mp;
    rep(i,0,n){
        mp[p[i]] = i + 1;
    }

    for(auto x:mp) cout << x.second << ' ';
    cout << endl;
}