#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
using namespace std;
int main() {
    int m; cin >> m;
    vector<vector<int>> G(10);
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        G[a].push_back(b), G[b].push_back(a);
    }
    string s = "999999999";
    for (int i = 0; i < 8; i++) {
        int p; cin >> p;
        s[p - 1] = (i + 1) + '0';
    }
    queue<string> que;
    que.push(s);
    map<string, int> Map;
    Map[s] = 0;
    while(!que.empty()) {
        s = que.front(); que.pop();
        int v = -1;
        for (int i = 0; i < 9; i++) if (s[i] == '9') v = i + 1;
        for (int i: G[v]) {
            string t = s;
            swap(t[v - 1], t[i - 1]);
            if (Map.count(t)) continue;
            Map[t] = Map[s] + 1;
            que.push(t);
        }

    }
    if (Map.count("123456789") == 0) cout << -1 << endl;
    else cout << Map["123456789"] << endl;
}
