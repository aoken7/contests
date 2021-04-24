//解説放送そのまま
#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

using C = complex<double>;

C input(){
    double x, y;
    cin >> x >> y;
    return C(x,y);
}

int main(){
    ll n; cin >> n;
    C s = input();
    C t = input();

    C o = (s+t)/2.0;
    double PI = acos(-1);
    double rad = 2*PI/n;
    C r(cos(rad), sin(rad));
    C ans = o + (s-o)*r;
    printf("%.10f %.10f\n", ans.real(), ans.imag());
}
