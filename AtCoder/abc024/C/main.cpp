//解説読んだ
#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

ll n, d, k;
vector<ll> l, r;
//vector<ll> s, t;

int main() { 
    cin >> n >> d >> k;
    l = r = vector<ll>(d);
    //s = t = vector<ll>(k);
    rep(i,0,d) cin >> l[i] >> r[i];
    
    rep(i,0,k){
        ll s, t; cin >> s >> t;
        ll pos = s;
        if(s < t){
            rep(i,0,d){
                if(l[i] <= pos and pos <= r[i]){
                    pos = r[i]; 
                }
                if(pos >= t){
                    put(i+1);
                    break;
                }
            }
        }else if(s > t){
            rep(i,0,d){
                if(l[i] <= pos and pos <= r[i]){
                    pos = l[i];
                }
                if(pos <= t){
                    put(i+1);
                    break;
                }
            }
        }
    }
}
