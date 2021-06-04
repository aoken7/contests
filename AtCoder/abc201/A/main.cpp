#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    vector<ll> a(3);
    rep(i,0,3) cin >> a[i];
    sort(all(a),greater<ll>());

    if(a[0] - a[1] == a[1] - a[2]) put("Yes");
    else put("No");
}
