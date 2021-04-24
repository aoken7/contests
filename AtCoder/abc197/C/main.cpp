#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

ll n;
vector<ll> a;
vector<deque<ll>> bit;

void dfs(ll cnt=0, deque<ll> v={0}){
    if(cnt == n-1) {
        v.push_back(n);
        bit.push_back(v);
        return;
    }

    dfs(cnt+1, v);
    v.push_back(cnt+1);
    dfs(cnt+1, v);
}


int main(){
    cin >> n;
    a = vector<ll>(n);
    rep(i,0,n) cin >> a[i];

    dfs();

    ll ans = 2LL << 31;

    for(auto x:bit){
        vector<ll> ored;
        rep(i,0,x.size()-1){
            //cout << x[i] << " " << x[i+1] << endl;
            ll ortmp = 0;

            rep(j,x[i], x[i+1]){
                ortmp |= a[j];
            }
            ored.push_back(ortmp);
        }
        ll xortmp = 0;
        for(auto y:ored){
            //cout << y << " ";
            xortmp ^= y;
        }
        ans = min(ans, xortmp);
    }

    put(ans);
}
