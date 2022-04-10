#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

double getRadian(double x, double y, double x2, double y2) {
    double radian = atan2(y2 - y,x2 - x);
    return radian;
}

int main(){
    ll a, b;
    cin >> a >> b;

    double radian = getRadian(0,0,a,b);

    double y2 = sin(radian);
    double x2 = cos(radian);

    cout << x2 << " " << y2 << endl;
}
