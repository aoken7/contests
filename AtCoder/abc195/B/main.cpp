//解説観た
#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

ll binsearch(ll a, ll b, ll x){
    ll ok = b;
    ll ng = a-1;
    while(abs(ok-ng)>1){
        ll mid = (ok + ng) / 2;
        if(x % mid == 0){
            ok = mid;
        }else{
            ng = mid;
        }
    }
    return ok;
}

int main(){
    ll a, b, w;
    cin >> a >> b >> w;

    w *= 1000;

    ll ma = -1;
    ll mi = 1e9;

    rep(i,1,w+1){
        if(a * i <= w and w <= b * i){
            ma = max(ma, i);
            mi = min(mi, i);
        }
    }

    if(ma == -1 or mi == 1e9){
        put("UNSATISFIABLE");
        return 0;
    }
    cout << mi << " " << ma << endl;
}
