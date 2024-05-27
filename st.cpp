#include <bits/stdc++.h>
using namespace std;

vector<int> ST;

void Build(int n, int l, int r, vector<int> &d) {//O(n)
    if (l == r) {
        ST[n] = d[l];
    } else {
        int m = (l + r) / 2;
        Build(2 * n + 1, l, m, d);
        Build(2 * n + 2, m + 1, r, d);
        ST[n] = ST[2 * n + 1] + ST[2 * n + 2];
    }
}

void Update(int p, int v, int n, int l, int r) {
    if (l > p || r < p) return;
    if (l == r) ST[n] = v;
    else {
        int m = (l + r) / 2;
        Update(p, v, 2 * n + 1, l, m);
        Update(p, v, 2 * n + 2, m + 1, r);
        ST[n] = ST[2 * n + 1] + ST[2 * n + 2];
    }
}

int Query(int i, int j, int n, int l, int r) {
    if (l > j || r < i) return 0;
    if (l >= i && r <= j) return ST[n];
    int m = (l + r) / 2;
    return Query(i, j, 2 * n + 1, l, m) + Query(i, j, 2 * n + 2, m + 1, r);
}

int main() {
    
    vector<int> datos = {5, 7, 1, 8, 10, 6, 4, 4};
    
    ST.assign(4 * datos.size(), 0);//datos.size() << 2
    
    Build(0, 0, datos.size() - 1, datos);
    
    int x, y; cin >> x >> y;
    
    cout << Query(x, y, 0, 0, datos.size() - 1) << "\n";
    
    return 0;
}