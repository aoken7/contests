//pdf見て解答

#include<bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
using namespace std;
using ll = long long;

int main(){
    ll a, b, c; cin >> a >> b >> c;

    ll d = c - a - b;

    if(4 * a * b < d*d and d > 0) put("Yes");
    else put("No");
}