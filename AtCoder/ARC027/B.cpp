#include<bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    string s; cin >> s;
    string t; cin >> t;

    vector<vector<ll>> graph('z'+1);

    rep(i,n){
        graph[s[i]].push_back(t[i]);
        graph[t[i]].push_back(s[i]);
    }

    ll ans = 1;

    vector<ll> flag('z'+1, -1);

    for(ll i=0; i<n; i++){
        if (flag[s[i]] > -1) continue;
        queue<ll> q;
        q.push(s[i]);
        flag[s[i]] = 0;
        ll exsistNum = 0;
        while(!q.empty()){
            ll front = q.front(); q.pop();
            //cout << "front:" << static_cast<char>(front) << endl;
            if ('0' <= front and front <= '9'){
                exsistNum = 1;
            }
            for(auto x:graph[front]){
                if (flag[x] < 0){
                    q.push(x);
                    flag[x] = 0;
                }
            }
        }
        if(!exsistNum and i != 0){ ans *= 10; }
        else if(!exsistNum and i == 0){ ans *= 9; }
    }

    put(ans);
}