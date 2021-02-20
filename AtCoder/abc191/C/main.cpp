#include<bits/stdc++.h>
#include<atcoder/all>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto q:a)cout<<q<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

struct Point{
    ll x,y;
    bool operator<(const Point &right) {
        return x == right.x ? y < right.y : x < right.x;
    }
}typedef P;

pair<double,double> calc(P p1, P p2){
    if(p1.x - p2.x == 0) return {0,0};
    double a = (p1.y - p2.y) / (double)(p1.x - p2.x);
    double b = p1.y - a * p1.x;
    return {a,b};
}
    
vector<P> vp;
queue<P> q;
vector<vector<bool>> flag;
vector<vector<char>> s;

vector<P> dis = {{1,0},{0,1},{-1,0},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};
vector<P> dis2 = {{1,0},{0,1},{-1,0},{0,-1}};

void dfs(P top){
        if(flag[top.x][top.y]) return;
        //cout << top.x << " " << top.y << endl;
        flag[top.x][top.y] = true;
        vp.push_back(top);
        for(auto z:dis){
            auto tmp = top;
            tmp.x += z.x;
            tmp.y += z.y;

            if(s[tmp.x][tmp.y]=='#' and !flag[tmp.x][tmp.y]){

                for(auto u:dis2){
                    if(s[tmp.x+u.x][tmp.y+u.y] == '.'){
                        dfs({tmp.x,tmp.y});
                        flag[tmp.x][tmp.y] = true;
                        return;
                    }
                }
            }
        }  
}

int main(){
    ll h, w; cin >> h >> w;
    s = vector<vector<char>>(h, vector<char>(w));
    P start = {-1,0};
    rep(i,0,h) rep(j,0,w){
        cin >> s[i][j];
        if(s[i][j] == '#' and start.x==-1) start={i,j};
    }

    flag=vector<vector<bool>>(h, vector<bool>(w,false));

    //flag[start.x][start.y] = true;

    dfs(start);

    ll ans = 0;

    P pre = vp[1];
    P prepre = vp[0];
    rep(i,2,vp.size()+1){
        ll j = i % vp.size();
        P tmp = vp[i];
        if(prepre.x != tmp.x and prepre.y != tmp.y) ans++;
        prepre = pre;
        pre = tmp;
    }

    put(ans);
}
