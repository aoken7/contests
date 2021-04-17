//pdf観た

#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll N; cin >> N;
    
    rep(h,1,3501){
        rep(n,1,3501){
            if((4 * h * n - N * n - N * h) == 0) continue;
            ll w = (N * h * n) / (double)(4 * h * n - N * n - N * h);
            if((N * h * n) % (4 * h * n - N * n - N * h) == 0 and w > 0){
                cout << h << " " << n << " " << w << endl;
                return 0;
            }
        }
    }
}
