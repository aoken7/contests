#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

template <typename T>
void putl(T t) {
    for (auto x : t) cout << x << " ";
    cout << endl;
}

int main(){
    ll n, x, y;
    cin >> n >> x >> y;
    vector<ll> a(n);
    rep(i,0,n) cin >> a[i];

    vector<ll> max_idx, min_idx;
    max_idx.push_back(0);
    min_idx.push_back(0);
    rep(i,0,n) {
        if(a[i] == x) max_idx.push_back(i+1);
        if(a[i] == y) min_idx.push_back(i+1);
    }
    max_idx.push_back(n+1);
    min_idx.push_back(n+1);

    ll ans = 0;

    rep(i,1,max_idx.size()-1){
        rep(j,1,min_idx.size()-1){
            if (max_idx[i] > )
            ll left = max_idx[i] - max_idx[i-1] + 1;
            ll right = min_idx[j] -  
        }
    }

}
