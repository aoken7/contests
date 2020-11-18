/*pdf見て回答
解法はわかったけど実装がわからなかった*/

#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
using namespace std;
using ll = long long;

int main(){
    ll sx, sy, tx, ty;
    cin >> sx >> sy >> tx >> ty;

    ll dx = tx - sx, dy = ty - sy;

    cout << string(dy, 'U') << string(dx, 'R');
    cout << string(dy, 'D') << string(dx, 'L');
    cout << 'L' << string(dy+1, 'U') << string(dx+1, 'R') << 'D';
    cout << 'R' << string(dy+1, 'D') << string(dx+1, 'L') << 'U';
    cout << endl;
}