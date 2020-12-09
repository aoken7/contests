#include<bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
using namespace std;
using ll = long long;

int main(){
    ll n, m; cin >> n >> m;
    string name; cin >> name;
    string kit; cin >> kit;

    map<char,ll> nameMp, kitMp;

    for(auto x:name) nameMp[x]++;
    for(auto x:kit) kitMp[x]++;

    ll ans = 1;
    for(auto x:nameMp){
        if(kitMp[x.first] <= 0){
            put(-1);
            return 0;
        }
        ans = max(ans, (x.second % kitMp[x.first] == 0 ? x.second / kitMp[x.first] : x.second / kitMp[x.first] + 1));
    }

    put(ans);
}