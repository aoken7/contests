#include<bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
using namespace std;
using ll = long long;

int main(){
    ll h, w; cin >> h >> w;
    char s[w+2][h+2];

    fill(s[0],s[w+2], '#');
    
    for(ll i=1; i<h+1; i++){
        for(ll j=1; j<w+1; j++){
            cin >> s[j][i];
        }
    }

    ll flag[w+2][h+2];
    fill(flag[0],flag[w+2],0);



    queue<pair<ll,ll>> q;
    q.push(make_pair(1,1));
    flag[1][1] = 1;
    while(!q.empty()){
        auto f = q.front(); q.pop();

        flag[f.first][f.second]
         += flag[f.first-1][f.second] + flag[f.first][f.second-1] + flag[f.first-1][f.second-1]; 


        cout << f.first << "," << f.second << " : " << flag[f.first][f.second] << endl;

        if(s[f.first+1][f.second] != '#'){
            q.push(make_pair(f.first+1,f.second));
        }
        if(s[f.first][f.second+1] != '#'){
            q.push(make_pair(f.first,f.second+1));
        }
        if(s[f.first+1][f.second+1] != '#'){
            q.push(make_pair(f.first+1,f.second+1));
        }

    }

    put(flag[w][h]);
}