#include <bits/stdc++.h>

#include <atcoder/all>
#define all(a) a.begin(), a.end()
#define put(i) cout << fixed << i << endl
#define putl(a)                        \
    for (auto q : a) cout << q << ' '; \
    cout << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;


std::vector<std::vector<long long>> comb(int n, int r) {
  std::vector<std::vector<long long>> v(n + 1,std::vector<long long>(n + 1, 0));
  for (int i = 0; i < v.size(); i++) {
    v[i][0] = 1;
    v[i][i] = 1;
  }
  for (int j = 1; j < v.size(); j++) {
    for (int k = 1; k < j; k++) {
      v[j][k] = (v[j - 1][k - 1] + v[j - 1][k]);
    }
  }
  return v;
}



int main() {
    ll k;
    cin >> k;
    string s, t;
    cin >> s >> t;

    map<ll, ll> mps, mpt;
    rep(i, 0, 5) {
        mps[s[i] - '0']++;
        mpt[t[i] - '0']++;
    }

    ll ssum = 0, tsum = 0;

    rep(i, 1, 9 + 1) {
        ssum += i * pow(10, mps[i]);
        tsum += i * pow(10, mpt[i]);
    }

    double ps = 0, pt = 0;

    map<ll,ll> card;
    rep(i,1,10){
        card[i] = k;
    }

    for(auto x:mps){
        card[x.first] -= x.second;
    }
    for(auto x:mpt){
        card[x.first] -= x.second;
    }


    for(auto i:card) {
        if(i.second <= 0) continue;
        for(auto j:card) {
            if(j.second <= 0) continue;
            if(i == j and i.second < 2) continue;

            ll tmps = ssum - i.first * pow(10, mps[i.first]) + i.first * pow(10, mps[i.first] + 1);
            ll tmpt = tsum - j.first * pow(10, mpt[j.first]) + j.first * pow(10, mpt[j.first] + 1);
            
            if(tmps > tmpt){
                ps++;
                cout << "i:" << i.first << " " << tmps << ">" << tmpt << endl;
            }else if(tmps < tmpt){
                pt++;
                cout << "j:" << j.first << " " << tmps << "<" << tmpt << endl;;
            }
            //cout << i.first << "," << j.first << endl; 
        }
    }

    ll cardnum = 0;
    for(auto x:card){
        if(x.second > 0) cardnum += x.second;
        //cout << x.first << " " << x.second << endl;;
    }
    auto c = comb(cardnum,2);
    put(c[cardnum][2]);
    put(ps);
    put(ps/c[cardnum][2]);
}
