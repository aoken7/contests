#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    vector<ll> a(3);
    cin >> a[0] >> a[1] >> a[2];

    sort(all(a));

    put(a[2]+a[1]); 
}
