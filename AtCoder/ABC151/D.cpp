#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto x:a)cout<<x<<' '; cout<<endl
using namespace std;
using ll = long long;

int main(){
    ll h, w; cin >> h >> w;
    h+=2; w+=2;
    vector<vector<char>> s(w, vector<char>(h,'#'));

    rep(y,1,h-1){
        rep(x,1,w-1){
            cin >> s[x][y];
        }
    }

    ll ans = 0;

    struct p{
        ll x, y;
    }typedef P;

    rep(y,1,h-1){
        rep(x,1,w-1){
            //BFS
            vector<vector<ll>> flag(w, vector<ll>(h,0));
            queue<P> q;
            P tmp; tmp.x = x; tmp.y = y;
            flag[x][y] = 1;
            if(s[tmp.x][tmp.y] == '#') continue;
            q.push(tmp);
            while(!q.empty()){
                P top = q.front(); q.pop();
   
                if(s[top.x+1][top.y] == '.' and flag[top.x+1][top.y] == 0){
                    P a; a.x = top.x+1; a.y = top.y;
                    q.push(a);
                    flag[a.x][a.y] = flag[top.x][top.y] + 1;
                }
                if(s[top.x][top.y+1] == '.' and flag[top.x][top.y+1] == 0){
                    P a; a.x = top.x; a.y = top.y+1;
                    q.push(a);
                    flag[a.x][a.y] = flag[top.x][top.y] + 1;
                }
                if(s[top.x-1][top.y] == '.' and flag[top.x-1][top.y] == 0){
                    P a; a.x = top.x-1; a.y = top.y;
                    q.push(a);
                    flag[a.x][a.y] = flag[top.x][top.y] + 1;
                }
                if(s[top.x][top.y-1] == '.' and flag[top.x][top.y-1] == 0){
                    P a; a.x = top.x; a.y = top.y-1;
                    q.push(a);
                    flag[a.x][a.y] = flag[top.x][top.y] + 1;
                }
            }
            for(auto k:flag) for(auto l:k) ans = max(ans,l);
        }
    }

    put(ans-1);
}