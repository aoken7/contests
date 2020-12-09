#include<bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
using namespace std;
using ll = long long;

int main(){
    ll w, h; cin >> w >> h;

    ll dp[w+2][h+2];
    fill(dp[0],dp[w+2],0);


    queue<pair<ll,ll>> q;
    q.push(make_pair(1,1));
    dp[1][1] = 1;
    while(!q.empty()){
        auto top = q.front(); q.pop();
        if(top.first <= w){
            q.push(make_pair(top.first+1,top.second));
            dp[top.first][top.second] 
                = max(dp[top.first][top.second] ,
                dp[top.first-1][top.second] + dp[top.first][top.second-1]);
        }
        if(top.second <= h){
            q.push(make_pair(top.first,top.second+1));
            dp[top.first][top.second] 
                = max(dp[top.first][top.second] ,
                dp[top.first-1][top.second] + dp[top.first][top.second-1]);
        }
    }
    
    cout << dp[w][h] << endl;
    /*
    rep(i,h+2){
        rep(j,w+2){
            cout << dp[j][i] << " ";
        }cout << endl;
    }*/
}