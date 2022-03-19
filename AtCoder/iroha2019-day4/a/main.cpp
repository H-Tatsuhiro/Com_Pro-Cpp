#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
bool memo[101][101][101][101], visited[101][101][101][101];
int main() {
    int n, a, b, c, d;
    vector<int> va(101, 0), vb(101, 0), vc(101, 0), vd(101, 0), v = {1, 2, 3}, tmp;
    cin >> n >> a >> b >> c >> d;
    for (int i = 0; i < a; i++) cin >> va[i];
    for (int i = 0; i < b; i++) cin >> vb[i];
    for (int i = 0; i < c; i++) cin >> vc[i];
    for (int i = 0; i < d; i++) cin >> vd[i];
    function<bool(int, int, int, int)> dp = [&](int i, int j, int k, int l) {
        if (i == a && j == b && k == c && l == d) return true;
        if (visited[i][j][k][l]) return memo[i][j][k][l];
        visited[i][j][k][l] = true;
        tmp.clear();
        tmp = {va[i], vb[j], vc[k]};
        sort(tmp.begin(), tmp.end());
        if (v == tmp) memo[i][j][k][l] |= dp(i + 1, j + 1, k + 1, l);
        tmp.clear();
        tmp = {va[i], vb[j], vd[l]};
        sort(tmp.begin(), tmp.end());
        if (v == tmp) memo[i][j][k][l] |= dp(i + 1, j + 1, k, l + 1);
        tmp.clear();
        tmp = {va[i], vc[k], vd[l]};
        sort(tmp.begin(), tmp.end());
        if (v == tmp) memo[i][j][k][l] |= dp(i + 1, j, k + 1, l + 1);
        tmp.clear();
        tmp = {vb[j], vc[k], vd[l]};
        sort(tmp.begin(), tmp.end());
        if (v == tmp) memo[i][j][k][l] |= dp(i, j + 1, k + 1, l + 1);
        return memo[i][j][k][l];
    };
    function<void(int, int, int, int)> restore = [&](int i, int j, int k, int l) -> void {
        if (i == a && j == b && k == c && l == d) return;
        tmp.clear();
        tmp = {va[i], vb[j], vc[k]};
        sort(tmp.begin(), tmp.end());
        if (v == tmp && dp(i + 1, j + 1, k + 1, l)) {
            cout << 4 << endl;
            restore(i + 1, j + 1, k + 1, l);
            return;
        }
        tmp.clear();
        tmp = {va[i], vb[j], vd[l]};
        sort(tmp.begin(), tmp.end());
        if (v == tmp && dp(i + 1, j + 1, k, l + 1)) {
            cout << 3 << endl;
            restore(i + 1, j + 1, k, l + 1);
            return;
        }
        tmp.clear();
        tmp = {va[i], vc[k], vd[l]};
        sort(tmp.begin(), tmp.end());
        if (v == tmp && dp(i + 1, j, k + 1, l + 1)) {
            cout << 2 << endl;
            restore(i + 1, j, k + 1, l + 1);
            return;
        }
        tmp.clear();
        tmp = {vb[j], vc[k], vd[l]};
        sort(tmp.begin(), tmp.end());
        if (v == tmp && dp(i, j + 1, k + 1, l + 1)) {
            cout << 1 << endl;
            restore(i, j + 1, k + 1, l + 1);
            return;
        }
    };
    if ((a + b + c + d) % 3 == 0 && (a + b + c + d) / 3 == n && dp(0, 0, 0, 0)) {
        cout << "Yes" << endl;
        restore(0, 0, 0, 0);
    }
    else cout << "No" << endl;
}

