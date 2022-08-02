#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    string s;
    cin >> s;

    map<char, ll> mp;
    for (auto c : s) mp[c]++;

    if (s.size() < 26) {
        for (ll i = 'a'; i <= 'z'; i++) {
            if (!mp.count(i)) {
                cout << s << char(i) << endl;
                return 0;
            }
        }
    } else {
        if (s == "zyxwvutsrqponmlkjihgfedcba") {
            put(-1);
        } else {
            string t = s;
            do{
                if (t > s) break;
            }while(next_permutation(all(t)));

            rep(i,0,s.size()){
                if (s[i] != t[i]){
                    put(t.substr(0,i+1));
                    return 0;
                }
            }
        }
    }
}
