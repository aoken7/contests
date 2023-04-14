#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    map<ll,ll> mp;
    rep(i,0,5){
        ll tmp;
        cin >> tmp;
        mp[tmp]++;
    }

    if((mp.begin()->second == 3 or mp.begin()->second == 2) and mp.size()==2) put("Yes");
    else put("No");
}
