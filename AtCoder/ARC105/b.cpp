#include<bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    map<ll,ll> mp;
    
    ll minn = 1e9;

    rep(i,n){
        ll tmp; 
        cin >> tmp;
        mp[tmp]++;
        minn = min(minn, tmp);
    }

    ll pre = minn;
    ll ans = minn;


    while(mp.size() > 1){
        auto i = mp.rbegin();
        for(; i != mp.rend(); ++i){
            //cout << minn << endl;
            mp[i->first - minn] += mp[i->first];
            mp.erase(i->first);
            pre = minn;
            minn = min(minn, i->first);
            //for(auto x:mp) cout << x.first << " "; cout << "min:" << minn << endl;
            break;
        }
        ans = pre;
        
    }

    put(ans);
}
