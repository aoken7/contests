//pdfmita
#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto x:a)cout<<x<<' '; cout<<endl
using namespace std;
using ll = long long;

ll n, a, b;
vector<ll> h;

ll enough(ll t){
    ll cnt = 0;
    rep(i,0,n){
        if(b*t >= h[i]) continue;
        cnt += floor(h[i]-b*t + (a-b-1))/(a-b);
    }
    return cnt <= t;
}

ll binSearch(ll ok=1e9, ll ng=0){
    //cout << "l:" << l << " r:" << r << " m:" << m << endl;
    while(abs(ok-ng)>1){
        ll m = (ok+ng) / 2;
        if(enough(m)) ok = m;
        else ng = m;
    }
    return ok;
}

int main(){
    cin >> n >> a >> b;
    h = vector<ll>(n);
    rep(i,0,n) cin >> h[i];

    put(binSearch());
}