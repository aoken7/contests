#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll a, b, c;
    cin >> a >> b >> c;

    if(a*a + b*b < c*c) put("Yes");
    else put("No");
}
