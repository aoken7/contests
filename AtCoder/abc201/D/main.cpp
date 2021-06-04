#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

struct Point{
    ll x,y;
    bool operator<(const Point &right) {
        return x == right.x ? y < right.y : x < right.x;
    }
}typedef P;

int main(){
    ll h, w; cin >> h >> w;
    vector<vector<char>> a;

    a = vector<vector<char>>(h+2,vector<char>(w+2, '#'));

    rep(y,1,h+1){
        rep(x,1,w+1){
            cin >> a[y][x];
        }
    }

    vector<vector<vector<ll>>> dp(h+2, vector<vector<ll>>(w+2,{-1,-1,-2}));
    
    queue<P> q;
    P start = {1,1};
    q.push(start);
    dp[1][1] = {0,0,1};

    while(!q.empty()){
        auto top = q.front(); q.pop();

        if(dp[top.x+1][top.y] == vector<ll>({-1,-1,-2})){
            auto tmp = dp[top.x][top.y];
            tmp[0]++; tmp[2] = dp[top.x][top.y][2] * -1;
            dp[top.x+1][top.y] = tmp;
        }
    }


    rep(y,0,h+2){
        rep(x,0,w+2){
            cout << a[y][x];
        }
        cout << endl;
    }
}
