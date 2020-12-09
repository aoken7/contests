#include<bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
using namespace std;
using ll = long long;

typedef pair<ll, ll> P;
bool pairCompare(const P& firstElof, const P& secondElof)
{
    //return firstElof.first > secondElof.first;
    return firstElof.first>secondElof.first || (firstElof.first==secondElof.second && firstElof.second<secondElof.second);
}

int main(){
    ll n, m; cin >> n >> m;
    vector<ll> a(m);
    rep(i,m) cin >> a[i];

    vector<ll> flag(n,0);
    vector<pair<ll,ll>> flag2(n);

    rep(i,m){
        flag[a[i]-1] = i+1;
    }
    rep(i,n){
        flag2[i] = make_pair(flag[i],i+1);
    }

    sort(all(flag2), [](pair<ll,ll> a, pair<ll,ll> b){
        return a.first>b.first || (a.first==b.first && a.second<b.second);
    });
    
    rep(i,n) cout << flag2[i].second  << endl;

}