#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

ll n, si, sj;
ll n_size;
vector<string> c;

template <typename T>
void putl(T t) {
    for (auto x : t) cout << x << " ";
    cout << endl;
}

void input() {
    cin >> n >> si >> sj;
    n_size = n + 2;
    c = vector<string>(n_size);
    c[0] = string(n_size, '#');
    c[n + 1] = string(n_size, '#');
    rep(i, 1, n + 1) {
        string tmp;
        cin >> tmp;
        c[i] = '#' + tmp + '#';
    }
}

struct Point {
    ll x, y;
    bool operator<(const Point &right) {
        return x == right.x ? y < right.y : x < right.x;
    }
} typedef P;

struct Node {
    P point;
    ll id = -1;
    pair<ll, ll> up = {-1, -1}, down = {-1, -1}, right = {-1, -1},
                 left = {-1, -1};
} typedef Node;

vector<Node> graph;

vector<vector<ll>> nodeFlag;

void serachNode() {
    nodeFlag = vector<vector<ll>>(n_size, vector<ll>(n_size, 0));
    ll cnt = 1;
    rep(i, 1, n + 1) {
        rep(j, 1, n + 1) {
            if (c[i][j] == '#') continue;
            ll tmp = 0;
            if (c[i + 1][j] != '#') tmp++;
            if (c[i - 1][j] != '#') tmp++;
            if (c[i][j + 1] != '#') tmp++;
            if (c[i][j - 1] != '#') tmp++;
            if (tmp > 2) nodeFlag[i][j] = cnt;
            cnt++;
        }
    }
    graph = vector<Node>(cnt + 1);
}

void genGraph() {
    rep(i, 1, n + 1) {
        rep(j, 1, n + 1) {
            if (!nodeFlag[i][j]) continue;
            // top
            for (ll k = 1;; k++) {
                if (c[i + k][j] == '#') break;
                if (nodeFlag[i + k][j]) {
                    graph[nodeFlag[i + k][j]].down = {nodeFlag[i][j], k};
                    graph[nodeFlag[i][j]].up = {nodeFlag[i + k][j], k};
                    break;
                }
            }
            // down
            for (ll k = 1;; k++) {
                if (c[i - k][j] == '#') break;
                if (nodeFlag[i - k][j]) {
                    graph[nodeFlag[i - k][j]].up = {nodeFlag[i][j], k};
                    graph[nodeFlag[i][j]].down = {nodeFlag[i - k][j], k};
                    break;
                }
            }
            // right
            for (ll k = 1;; k++) {
                if (c[i][j + k] == '#') break;
                if (nodeFlag[i][j + k]) {
                    graph[nodeFlag[i][j + k]].left = {nodeFlag[i][j], k};
                    graph[nodeFlag[i][j]].right = {nodeFlag[i][j + k], k};
                    break;
                }
            }
            // left
            for (ll k = 1;; k++) {
                if (c[i][j - k] == '#') break;
                if (nodeFlag[i][j - k]) {
                    graph[nodeFlag[i][j - k]].right = {nodeFlag[i][j], k};
                    graph[nodeFlag[i][j]].left = {nodeFlag[i][j - k], k};
                    break;
                }
            }
        }
    }
}

string convertString(string str) {
    string t = str;
    reverse(all(t));
    rep(i, 0, t.size()) {
        if (t[i] == 'U')
            t[i] = 'D';
        else if (t[i] == 'D')
            t[i] = 'U';
        else if (t[i] == 'R')
            t[i] = 'L';
        else if (t[i] == 'L')
            t[i] = 'R';
    }

    return str + t;
}

map<ll, ll> mp;

string dfs(ll node = nodeFlag[si + 1][sj + 1], string footPrint = "") {
    if (mp.count(node)) return footPrint;
    mp[node]++;

    vector<string> retString;

    ll cnt = 0;

    if (graph[node].up.first != -1 and !mp.count(graph[node].right.first)) {
        string tmp = dfs(graph[node].up.first,
                         footPrint + string(graph[node].up.second, 'D'));
        retString.push_back((tmp));
        cnt++;
    }

    if (graph[node].right.first != -1 and !mp.count(graph[node].right.first)) {
        string tmp = dfs(graph[node].right.first,
                         footPrint + string(graph[node].right.second, 'R'));
        retString.push_back(convertString(tmp));
        cnt++;
    }
    if (graph[node].down.first != -1 and !mp.count(graph[node].right.first)) {
        string tmp = dfs(graph[node].down.first,
                         footPrint + string(graph[node].down.second, 'U'));
        retString.push_back((tmp));
        cnt++;
    }
    if (graph[node].left.first != -1 and !mp.count(graph[node].right.first)) {
        string tmp = dfs(graph[node].left.first,
                         footPrint + string(graph[node].left.second, 'L'));
        retString.push_back(convertString(tmp));
        cnt++;
    }

    string ret;
    for (auto x : retString) ret += x;
    return ret;
}

string solve() {
    serachNode();
    genGraph();
    return dfs();
}

int main() {
    input();

    put(convertString(solve()));

    return 0;
}