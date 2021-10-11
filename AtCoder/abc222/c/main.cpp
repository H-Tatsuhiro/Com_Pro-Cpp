#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<vector<char>> a(2 * n, vector<char>(m, '.'));
    for (int i = 0; i < 2 * n; i++) for (int j = 0; j < m; j++) cin >> a[i][j];
    vector<pair<int, int>> v(2 * n, make_pair(0, 0));
    for (int i = 0; i < 2 * n; i++) v[i].second = i;
    function<int(char, char)> judge = [](char x, char y){
        if (x == y) return -1;
        if (x == 'G' && y == 'P') return 1;
        if (x =='C' && y == 'G') return 1;
        if (x == 'P' && y == 'C') return 1;
        return 0;
    };
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int p = v[2 * j].second, q = v[2 * j + 1].second;
            int res = judge(a[p][i], a[q][i]);
            if (res != -1) v[2 * j + res].first--;
        }
        sort(v.begin(), v.end());
    }
    for (auto vv : v) cout << vv.second + 1 << endl;
}
