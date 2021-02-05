//解説放送そのまま
#include<bits/stdc++.h>
#include<atcoder/all>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto q:a)cout<<q<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int op(int x, int y){ return x^y; }
int e(){ return 0; }

int main(){
    ll n, q; cin >> n >> q;
    atcoder::segtree<int,op,e> seg(n);

    rep(i,0,n){
        int a; cin >> a;
        seg.set(i,a);
    }

    rep(i,0,q){
        ll t, x, y;
        cin >> t >> x >> y;
        x--;
        if(t==1){
            seg.set(x, seg.get(x)^y);
        }else{
            int ans = seg.prod(x,y);
            put(ans);
        }
    }
}
