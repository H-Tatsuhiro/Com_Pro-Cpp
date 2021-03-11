#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n, m, q; cin >> n >> m >> q;
    vector<vector<char>> v(n, vector<char>(m, '.'));
    unordered_map<char, bool> Map_ch;
    unordered_map<char, pair<int, int>> Map;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
            if ('A' <= v[i][j] && v[i][j] <= 'Z') {
                Map_ch[v[i][j]] = true;
                Map[v[i][j]] = make_pair(i + 1, j + 1);
            }
        }
    }
    for (int i = 0; i < q; i++) {
        char c; cin >> c;
        if (Map_ch[c]) cout << Map[c].first << " " << Map[c].second << endl;
        else cout << "NA" << endl;
    }
}
