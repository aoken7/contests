#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto x:a)cout<<x<<' '; cout<<endl
using namespace std;
using ll = long long;

struct Point{
    ll x,y;
    bool operator<(const Point &right) {
        return x == right.x ? y < right.y : x < right.x;
    }
}typedef P;

ll check(vector<P> p){
    vector<ll> len;
    rep(i,0,p.size()){
        rep(j,0,p.size()){
            if(i==j) continue;
            len.push_back(pow(p[i].x - p[j].x,2) + pow(p[i].y - p[j].y,2));
        }
    }
    sort(all(len));
    
    if(len[0]==len[1] and len[1]==len[2] and len[2]==len[3] and
        len[3]*2 == len[4] and len[4]==len[5]){
            return len[0];
        }

    return 0;
}

int main(){
    ll n; cin >> n;
    vector<P> p(n);
    rep(i,0,n) cin >> p[i].x >> p[i].y;

    ll ans = 0;

    rep(i,0,n){
        rep(j,0,n){
            if(i==j) continue;
            rep(k,0,n){
                if(i==k or j==k) continue;
                rep(m,0,n){
                    if(i==m or j==m or k==m) continue;
                    ll tmp;
                    if(tmp = check({p[i],p[j],p[k],p[m]})){
                        ans = max(ans, tmp);
                    }

                }
            }
        }
    }

    put(ans);
}