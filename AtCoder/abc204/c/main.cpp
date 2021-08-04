#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
using Graph = vector<vector<int>>;
vector<bool> seen;
void dfs(const Graph &G, int v) {
    seen[v] = true; // v を訪問済にする
    // v から行ける各頂点 next_v について
    for (auto next_v : G[v]) {
        if (seen[next_v]) continue; // next_v が探索済だったらスルー
        dfs(G, next_v); // 再帰的に探索
    }
}
int main() {
    // 頂点数と辺数、s と t
    int N, M; cin >> N >> M;
    // グラフ入力受取
    Graph G(N);
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        G[a - 1].push_back(b - 1);
    }
    set<pair<int, int>> s;
    for (int i = 0; i < N; i++) {
        seen.assign(N, false);
        dfs(G, i);
        for (int j = 0; j < N; j++) {
            if (seen[j]) s.insert(make_pair(i, j));
        }
    }
    cout << s.size() << endl;
}

