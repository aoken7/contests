#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll a, b; cin >> a >> b;

    if(b <= a * 6 and b >= a) put("Yes");
    else put("No");
}
