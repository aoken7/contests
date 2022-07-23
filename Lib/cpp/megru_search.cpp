#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

ll solve(ll x){
    return x;
}

//<lib>
//prefix megru_search
int megru_search() {
    ll ok = 0;        //最小値求めるときは ok = MAX
    ll ng = 1e9 + 7;  //                   ng = -1
    while (abs(ok - ng) > 1) {
        ll mid = (ok + ng) / 2;
        if (solve(mid)) {
            ok = mid;
        } else {
            ng = mid;
        }
    }
    return ok;
}
//<lib/>