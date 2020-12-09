#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto x:a)cout<<x<<' '; cout<<endl
using namespace std;
using ll = long long;

int main(){
    vector<char> b(10);
    rep(i,0,10) cin >> b[i];
    ll n; cin >> n;
    vector<string> a(n);
    vector<ll> tmp_a(n);
    rep(i,0,n){
        cin >> a[i];
    }

    map<char,char> mp1, mp2;
    rep(i,0,10) {
        mp1[char(i + '0')] = b[i];
        mp2[b[i]] = char(i + '0');
    }

    rep(i,0,n){
        string tmp;
        for(auto x:a[i]){
            tmp.push_back(mp2[x]);
        }
        tmp_a[i] = stoi(tmp);
    }
    sort(all(tmp_a));

    rep(i,0,n){
        string tmp;
        for(auto x:to_string(tmp_a[i])){
            tmp.push_back(mp1[x]);
        }
        put(tmp);
    }
}