//pdfmita
#include<bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto x:a)cout<<x<<' '; cout<<endl
using namespace std;
using ll = long long;


int main(){
    ll n; cin >> n;
    vector<ll> a;
    map<ll,ll> mp;
    rep(i,n){
        ll tmp; cin >> tmp;
        mp[tmp]++;
    }
    
    for(auto x:mp) if(x.second == 1) a.push_back(x.first);

    if(a.size() < 1){
        put(0);
        return 0;
    }

    vector<bool> dp(*max_element(all(a))+1, true);

    sort(all(a));
    ll ans = 0;

    rep(i,a.size()){
        for(ll j=a[i]*2; j<dp.size(); j+=a[i]){
            dp[j] = false;
        }
    }


    rep(i,a.size()){
        if(dp[a[i]]) ans++;
    }
    
    put(ans);
}