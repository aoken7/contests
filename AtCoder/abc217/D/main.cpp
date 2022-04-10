#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll l, q;
    cin >> l >> q;
    
    map<ll,ll> mp;
    mp[0] = 0;
    mp[l+1] = l+1;

    rep(i,0,q){
        ll c, x;
        cin >> c >> x;
        
        if(c == 1){
            mp[x] = x;
        }else{
            mp[x] = x;
            auto it1 = mp.lower_bound(x);
            auto it2 = it1;
            ll pre = (--it1)->first;
            ll post = (++it2)->first;
            //if(pre == 0)
            put(post-pre-1);
        

            mp.erase(x);
        }
    }
}
