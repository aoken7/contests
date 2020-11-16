#include <bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout << fixed << i << endl
using namespace std;
using ll = long long;

int main() {
    string s;
    cin >> s;

    if (s.size() < 3) {

        if (stoi(s) % 8 == 0) {
            put("Yes");
            return 0;
        }
        reverse(s.begin(), s.end());
        if (stoi(s) % 8 == 0) {
            put("Yes");
            return 0;
        }
        put("No");
        return 0;
    }

    map<ll, ll> input_mp;

    while (s.size() > 0) {
        char c = s.back();
        s.pop_back();
        input_mp[c - '0']++;
    }

    vector<map<ll, ll>> vec;

    for (ll i = 100; i < 1000; i++) {
        ll x = i;
        if (i % 8 == 0) {
            map<ll, ll> tmp_mp;
            while (x > 0) {
                tmp_mp[x % 10]++;
                x /= 10;
            }
            /*
            if (tmp_mp[0] == 0) {
                tmp_mp.erase(0);
                vec.push_back(tmp_mp);
            }*/
            vec.push_back(tmp_mp);
        }
    }

    for (auto x : vec) {
        ll flag = 0;
        for (auto y : x) {
            for (auto z : input_mp) {
                if (y.first == z.first and y.second <= z.second) {
                    flag++;
                }
            }
        }

        if (flag == x.size()) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    put("No");

    /*
    cout << "vec" << endl;
    for (auto x : vec) {
        for (auto y : x) cout << "(" << y.first << "," << y.second << ") ";
        cout << endl;
    }
    cout << "input" << endl;
    for (auto x : input_mp) cout << "(" << x.first << "," << x.second << ") ";
    cout << endl;
    */
}