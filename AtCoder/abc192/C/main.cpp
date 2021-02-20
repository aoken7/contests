#include<bits/stdc++.h>
#include<atcoder/all>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto q:a)cout<<q<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n, k; cin >> n >> k;

    vector<ll> a(k+1,0);
    a[0] = n;
    rep(i,1,k+1){
        string g1 = to_string(a[i-1]);
        sort(all(g1),greater<char>());
        string g2 = to_string(a[i-1]);
        sort(all(g2),greater<char>());
        if(g2[g2.size()-1] == '0' and g2.size()>1) g2.pop_back();
        sort(all(g2));
        a[i] = stol(g1) - stol(g2);
    }
    put(a[k]);
}
