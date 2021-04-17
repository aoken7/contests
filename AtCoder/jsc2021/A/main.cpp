#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll x, y, z; cin >> x >> y >> z;

    double t = y / (double)x;

        //put(t);
    rep(i,1,1e7){
        double s = i / (double)z;
        //put(s);
        if(s > t){
            for(ll j=i-1; ; j--){
                double s = j / (double)z;
                if(s < t){
                    put(j);
                    return 0;
                }
            }
        }
    }
}
