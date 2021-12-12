#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    while(1){
        ll w, h; cin >> w >> h;
        if (w == h and h == 0) break;
        
        vector<vector<ll>>c(w,vector<ll>(h));
        rep(i,0,w){
            rep(j,0,h){
                cin >> c[i][j];
            }
        }

        vector<pair<ll,ll>> angle = {{0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1},{-1,0},{-1,1}};

        ll ans = 0;

        rep(i,1,w-1){
            rep(j,1,h-1){
                ll cnt = 0;
                for(auto x:angle){
                    if(c[i+x.first][j+x.second]){
                        cnt++;
                    }
                }
                if(cnt == 0){
                    ans++;
                }
            }
        }
        put(ans);
    }
}