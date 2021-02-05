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

vector<vector<ll>> ans;

int main(){
    ll h, w; cin >> h >> w;
    vector<vector<ll>> a(h, vector<ll>(w));
    rep(y,0,h) rep(x,0,w) cin >> a[y][x];

    vector<pair<P,P>> p;

    vector<P> tmp;
    P pre = {0,0};
    ll flag = 0;
    rep(y,0,h) {
        if(y % 2==0){
            for(ll x=0; x<w; x++){
                if(a[y][x] % 2 == 1){
                    if(flag){
                        flag = 0;
                        a[y][x]++;
                        if(!(pre.y == y and pre.x == x)) ans.push_back({pre.y+1, pre.x+1, y+1, x+1});
                    }else{
                        flag = 1;
                    }
                    
                    pre = {x,y};
                }else{
                    if(flag){
                        if(!(pre.y == y and pre.x == x)) ans.push_back({pre.y+1, pre.x+1, y+1, x+1});
                    }
                    pre = {x,y};
                }
            }
        }else{
            for(ll x=w-1; x>=0; x--){
                if(a[y][x] % 2 == 1){
                    if(flag){
                        flag = 0;
                        a[y][x]++;
                        if(!(pre.y == y and pre.x == x)) ans.push_back({pre.y+1, pre.x+1, y+1, x+1});
                    }else{
                        flag = 1;
                    }
                    pre = {x,y};
                }else{
                    if(flag){
                        if(!(pre.y == y and pre.x == x)) ans.push_back({pre.y+1, pre.x+1, y+1, x+1});
                    }
                    pre = {x,y};
                }
            }
        }
    }

    put(ans.size());
    for(auto x:ans){
        rep(i,0,x.size()){
            cout << x[i];
            if(i != x.size()-1) cout << " ";
        }
        cout << endl;
    }
}
