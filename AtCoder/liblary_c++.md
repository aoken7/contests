# C++ Library

- [for](###for)
- [for2](###for2)
- [unionfind](###unionfind)
- [WeightedUnionFind](###WeightedUnionFind)
- [eratosthenes](###eratosthenes)
- [point](###point)
- [chminmax](###chminmax)

### for
```c++
for(ll i=0; i<n; i++)
```

### for2
```c++
for(ll j=0; j<n; j++)
```

### unionfind
```c++
struct UnionFind {
    vector<int> r;
 
    UnionFind(int N) {
        r = vector<int>(N+1, -1);
    }
 
    int root(int x) {
        if (r[x] < 0) return x;
        return r[x] = root(r[x]);
    }
 
    bool unite(int x, int y) {
        x = root(x);
        y = root(y);
        if (x == y) return false;
        if (r[x] > r[y]) swap(x, y);
        r[x] += r[y];
        r[y] = x;
        return true;
    }
 
    int size(int x) {
        return -r[root(x)];
    }
};
```

### WeightedUnionFind
```c++
template<class Abel> struct UnionFind {
    vector<int> par;
    vector<int> rank;
    vector<Abel> diff_weight;

    UnionFind(int n = 1, Abel SUM_UNITY = 0) {
        init(n, SUM_UNITY);
    }

    void init(int n = 1, Abel SUM_UNITY = 0) {
        par.resize(n); rank.resize(n); diff_weight.resize(n);
        for (int i = 0; i < n; ++i) par[i] = i, rank[i] = 0, diff_weight[i] = SUM_UNITY;
    }

    int root(int x) {
        if (par[x] == x) {
            return x;
        }
        else {
            int r = root(par[x]);
            diff_weight[x] += diff_weight[par[x]];
            return par[x] = r;
        }
    }

    Abel weight(int x) {
        root(x);
        return diff_weight[x];
    }

    bool issame(int x, int y) {
        return root(x) == root(y);
    }

    bool merge(int x, int y, Abel w) {
        w += weight(x); w -= weight(y);
        x = root(x); y = root(y);
        if (x == y) return false;
        if (rank[x] < rank[y]) swap(x, y), w = -w;
        if (rank[x] == rank[y]) ++rank[x];
        par[y] = x;
        diff_weight[y] = w;
        return true;
    }

    Abel diff(int x, int y) {
        return weight(y) - weight(x);
    }
};
```

### eratosthenes
```c++
vector<pair<long long, long long> > eratosthenes(long long N) {
    vector<pair<long long, long long> > res;
    for (long long a = 2; a * a <= N; ++a) {
        if (N % a != 0) continue;
        long long ex = 0; // 指数

        // 割れる限り割り続ける
        while (N % a == 0) {
            ++ex;
            N /= a;
        }

        // その結果を push
        res.push_back({a, ex});
    }

    // 最後に残った数について
    if (N != 1) res.push_back({N, 1});
    return res;
}
```

### point
```c++
struct Point{
    ll x,y;
    bool operator<(const Point &right) {
        return x == right.x ? y < right.y : x < right.x;
    }
}typedef P;
```

### chminmax
```c++
template<class T> void chmin(T& a, T b){ a > b ? a = b : a; }
template<class T> void chmax(T& a, T b){ a < b ? a = b : a; }
```