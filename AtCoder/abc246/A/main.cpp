#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    vector<ll> x(3), y(3);
    rep(i,0,3){
        cin >> x[i] >> y[i];
    }

    map<ll,ll> mpx, mpy;
    rep(i,0,3){
        mpx[x[i]]++;
        mpy[y[i]]++;
    }

    ll a, b;
    for(auto x:mpx){
        if(x.second == 1){
            a = x.first;
        } 
    }

    for(auto y:mpy){
        if(y.second == 1){
            b = y.first;
        } 
    }
    cout << a << " " << b << endl;
}
