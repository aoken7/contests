#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

template <typename T>
void putl(T t) {
    for (auto x : t) cout << x << " ";
    cout << endl;
}

vector<ll> aa;

bool isOK(int index, int key) {
    if (aa[index] > key) return true;
    else return false;
}

int binary_search(int key) {
    int left = -1; //「index = 0」が条件を満たすこともあるので、初期値は -1
    int right = (int)aa.size(); // 「index = a.size()-1」が条件を満たさないこともあるので、初期値は a.size()

    /* どんな二分探索でもここの書き方を変えずにできる！ */
    while (right - left > 1) {
        int mid = left + (right - left) / 2;

        if (isOK(mid, key)) right = mid;
        else left = mid;
    }

    /* left は条件を満たさない最大の値、right は条件を満たす最小の値になっている */
    return left;
}

int main() {
    ll n, k;
    cin >> n >> k;
    vector<ll> p(n, 0);
    rep(i, 0, n) {
        ll a, b, c;
        cin >> a >> b >> c;
        p[i] = a + b + c;
    }

    auto q = p;
    sort(all(q));

    aa = q;

    rep(i,0,n){
        ll idx = binary_search(p[i]+300);
        if(n - idx <= k) put("Yes");
        else put("No");
        //put(n - idx);
    }

    
}
