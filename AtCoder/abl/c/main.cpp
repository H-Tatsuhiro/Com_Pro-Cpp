#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;
struct UnionFind{
    vector<int> p;
    UnionFind(int n){
        p.resize(n, -1);
    }
    int find(int x){
        if(p[x] == -1)return x;
        else return p[x] = find(p[x]);
    }
    void unite(int x, int y){
        x = find(x);
        y = find(y);
        if(x == y)return;
        p[x] = y;
    }
};
int main() {
    int n, m; cin >> n >> m;
    UnionFind uf(n);
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b; a--, b--;
        uf.unite(a, b);
    }
    set<int> S;
    for (int i = 0; i < n; i++) {
        S.insert(uf.find(i));
    }
    cout << S.size() - 1 << endl;
}
