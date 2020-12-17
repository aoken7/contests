#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto x:a)cout<<x<<' '; cout<<endl
using namespace std;
using ll = long long;

ll k;
vector<string> a;

ll fun(string x, ll len=0){
    a.push_back(x);
    if (a.size() > k) return 0;
    if(x[len]-'0' > 1) fun(x+);
    if(x % 10 < 9) fun(x*10+x%10+1);
    fun(x*10+x);
    return 0;
}


int main(){
    cin >> k;

    rep(i,1,9){
        fun(i);
    }
    sort(all(a));
    put(a[k]);
}