#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << fixed << i << endl
#define putl(a)                        \
    for (auto x : a) cout << x << ' '; \
    cout << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll n, c_size;
    cin >> n >> c_size;

    vector<ll> s(n), t(n), c(n);
    rep(i, 0, n) cin >> s[i] >> t[i] >> c[i];

    map<ll,priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>>> mp;
    
    rep(i,0,n) mp[c[i]].push({s[i],t[i]});

    vector<pair<ll,ll>> joind_list;

    for(auto x: mp){
        auto pre = x.second.top(); x.second.pop();
        while(!x.second.empty()){
            //cout << "(" << pre.first << "," << pre.second << ")" << endl;
            auto top = x.second.top(); x.second.pop();
            //cout << "(" << pre.second << "," << top.first << ")" << endl;
            if(pre == top){
                continue;
            }
            if(pre.second == top.first){
                x.second.push({pre.first,top.second});
                pre = {pre.first,top.second};
            }else{
                joind_list.push_back(pre);
                pre = top;
            }
        }
        joind_list.push_back(pre);
    }

    vector<ll> imos(2e5 + 1, 0);

    rep(i, 0, joind_list.size()) {
        imos[joind_list[i].first * 2 - 1]++;
        imos[joind_list[i].second * 2]--;
    }

    rep(i, 1, 2e5+1) { imos[i] += imos[i-1]; }

    //for(auto x:joind_list){ cout << x.first << " " << x.second << endl; }
    
    put(*max_element(all(imos)));
}
