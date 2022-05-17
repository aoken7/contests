#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    if (s1 == ".#" and s2 == "#." or s1 == "#." and s2 == ".#")
        put("No");
    else
        put("Yes");
}
