#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

#define NUM 100000
#define RNUM -100000

vector<vector<ll>> table,flag;
ll cnt = 0;

void dfs(pair<ll,ll> p){
    if(flag[p.first][p.second] or table[p.first][p.second] == NUM) return;

    flag[p.first][p.second] = 1;
    cnt++;
    ll x = p.first, y = p.second;

    for(ll i = 1;; i++){
        if(table[x+i][y] == NUM or flag[x+i][y]) break;
        if(table[x+i][y] != RNUM){
            dfs({x+i,y});
        }
        flag[x+i][y] = 1;
    }
    
    for(ll i = 1;; i++){
        if(table[x-i][y] == NUM or flag[x-i][y]) break;
        if(table[x-i][y] != RNUM){
            dfs({x-i,y});
        }
        flag[x-i][y] = 1;
    }
    
    for(ll i = 1;; i++){
        if(table[x][y+i] == NUM or flag[x][y+i]) break;
        if(table[x][y+i] != RNUM){
            dfs({x,y+i});
        }
        flag[x][y+i] = 1;
    }
    
    for(ll i = 1;; i++){
        if(table[x][y-i] == NUM or flag[x][y-i]) break;
        if(table[x][y-i] != RNUM){
            dfs({x,y-i});
        }
        flag[x][y-i] = 1;
    }
}

int main(){
    while(1){
        ll w, h; cin >> w >> h;
        if(w == 0 and h == 0) break;

        ll k = w + h - 1;

        pair<ll,ll> start;
        table = vector<vector<ll>>(w+2,vector<ll>(h+2,NUM));
        rep(i,1,w+1) rep(j,1,h+1) table[i][j] = RNUM;
        flag = vector<vector<ll>>(w+2,vector<ll>(h+2,0));
        
        rep(i,0,k){
            ll x, y, n; cin >> x >> y >> n;
            table[x][y] = n;
            start = {x,y};
        }

        cnt = 0;
        dfs(start);
        
        if(cnt == k){
            put("YES");
        }else{
            put("NO");
        }
    }
}