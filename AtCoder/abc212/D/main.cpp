#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll q; cin >> q;
    
    ll cnt = 0;

    map<ll,ll> mp;

    rep(i,0,q){
        ll p;
        cin >> p;
        if(p == 1){
            ll x;
            cin >> x;
            mp[x-cnt]++;
        }else if (p == 2){
            ll x;
            cin >> x;
            cnt += x;
        }else if(p == 3){
            ll ans = mp.begin()->first;
            put(ans + cnt);
            mp[ans]--;
            if (mp[ans] < 1)
                mp.erase(ans);
        }
        
    }
}
