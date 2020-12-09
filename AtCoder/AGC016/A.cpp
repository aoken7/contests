#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto x:a)cout<<x<<' '; cout<<endl
using namespace std;
using ll = long long;

int main(){
    string s; cin >> s;

    map<char,ll> mp;
    for(auto x:s) mp[x]++;

    rep(i,0,s.size()){
        if(s[i] == 'r') put(i);
    }
}