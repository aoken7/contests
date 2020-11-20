#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    vector<string> w(n);
    rep(i,0,n) cin >> w[i];

    map<string,int> mp;
    ll ans = -1;

    mp[w[0]]++;
    rep(i, 1, n){
        if(mp[w[i]] > 0 or w[i-1][w[i-1].size()-1] != w[i][0]){
            ans = i;
            break;
        }
        mp[w[i]]++;
    }

    if(ans == -1) put("DRAW");
    else if(ans % 2 == 0) put("LOSE");
    else put("WIN");
}