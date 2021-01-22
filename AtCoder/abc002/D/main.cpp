//他人の解答みた

#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define max
#define put(i) cout<<fixed<<i<<endl
#define debug(i) cerr<<fixed<<i<<endl
#define debugl(a) for(auto x:a)cerr<<x<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

ll n, m;

vector<vector<ll>> g;

int main(){
    cin >> n >> m;
    vector<ll> x(m), y(m);
    rep(i,0,m) cin >> x[i] >> y[i];

    g = vector<vector<ll>>(n+1);

    rep(i,0,m) g[x[i]].push_back(y[i]), g[y[i]].push_back(x[i]);
    //rep(i,0,n) g[i].push_back(i), sort(all(g[i]));

    ll ans = 1;

    for (int bit = 0; bit < (1<<n); ++bit) {
        vector<int> S;
        for (int i = 0; i < n; ++i) {
            if (bit & (1<<i)) { // 列挙に i が含まれるか
                S.push_back(i+1);
            }
        }
        //debugl(S);
        ll flag = 1;
        for(auto x:S){
            //cout << x << ":";
            for(auto y:S){
                if(x == y) continue;
                if(find(all(g[x]),y) == g[x].end()){
                    flag = 0;
                    
                }
            }
        }    
        //put(flag);
        //if(flag) put(S.size());
        if(flag) ans = max(ans, ll(S.size()));
    }
    put(ans);
}
