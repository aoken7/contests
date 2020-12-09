#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
using namespace std;
using ll = long long;

int main(){
    string s; cin >> s;
    string t; cin >> t;

    map<char,ll> mp1, mp2;
    
    for (auto x:s) mp1[x]++;
    for (auto x:t) mp2[x]++;

    vector<ll> cnt1, cnt2;

    for (auto x:mp1) cnt1.push_back(x.second);
    for (auto x:mp2) cnt2.push_back(x.second);

    sort(all(cnt1));
    sort(all(cnt2));

    put((cnt1 == cnt2 ? "Yes" : "No"));
}