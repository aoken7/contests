//pdfmita
#include<bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
using namespace std;
using ll = long long;


int main(){
    ll n; cin >> n;
    vector<ll> a(n); rep(i,n) cin >> a[i];

    sort(all(a));

    ll ma = a[n-1];
    double mi = 1e9;
    ll idx = 0;
    for(auto x:a){
        if (abs(ma/2.0 - x) < mi){
            idx = x;
            mi = abs(ma/2.0-x);
        }
    }
    cout << ma << " " << idx << endl;
}