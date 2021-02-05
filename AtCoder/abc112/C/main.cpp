#include<bits/stdc++.h>
#include<atcoder/all>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto q:a)cout<<q<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    vector<ll> x(n), y(n), h(n);
    rep(i,0,n) cin >> x[i] >> y[i] >> h[i];

    rep(cx,0,101){
        rep(cy,0,101){
            ll j;
            for(j=0; j<n; j++) if(h[j]) break;
            ll H = h[j] + abs(x[j]-cx) + abs(y[j]-cy);
            ll flag = 1;
            rep(i,0,n){
                //if(h[i] == 0) continue;
                if(h[i] != max(H - abs(x[i]-cx) - abs(y[i]-cy),0ll)) {
                    flag=0;
                    break;
                }
            }
            if(flag){
                cout << cx << " " << cy << " " << H << endl;
                return 0;
            }
        }
    }
}
