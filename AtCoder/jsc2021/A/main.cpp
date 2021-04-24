#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    double x, y, z; cin >> x >> y >> z;

    ll ok = 1e9;
    ll ng = -1;

    while(abs(ok-ng) > 1){
        ll mid = (ok + ng) / 2;
        if(y/x > mid/z) ng = mid;
        else ok = mid;
    }

    put(ng);
}
