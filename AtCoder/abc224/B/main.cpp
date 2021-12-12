#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll h, w; cin >> h >> w;
    //ll a[w][h];

    vector<vector<ll>> a(h,vector<ll>(w));

    rep(i,0,h){
        rep(j,0,w){
            cin >> a[i][j];
        }
    }

    rep(i1,0,h){
        rep(j1,0,w){
            rep(i2,i1,h){
                rep(j2,j1,w){
                    if(a[i1][j1] + a[i2][j2] > a[i2][j1] + a[i1][j2]){
                        //cout << a[i1][j1] + a[i2][j2] << endl;
                        //cout << a[i2][j1] + a[i1][j2] << endl;
                        put("No");
                        return 0;
                    }
                }
            }
        }
    }

    put("Yes");

    return 0;

    rep(i,0,h){
        rep(j,0,w){
            cin >> a[j][i];
        }
    }

    rep(i1,0,w){
        rep(j1,0,h){
            rep(i2,0,w){
                rep(j2,0,h){
                    if(a[i1][j1] + a[i2][j2] > a[i2][j1] + a[i1][j2]){
                        //cout << a[i1][j1] + a[i2][j2] << endl;
                        //cout << a[i2][j1] + a[i1][j2] << endl;
                        put("No");
                        return 0;
                    }
                }
            }
        }
    }

    put("Yes");
}
