#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<vector<long long int>> G(n, vector<long long int>(n, 0));
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        cin >> G[a - 1][b - 1];
        G[b - 1][a - 1] = G[a - 1][b - 1];
    }
    long long int ans = 0;
    vector<int> p;
    for (int i = 0; i < n; i++) p.push_back(i);
    do {
        long long int tmp = 0;
        for (int i = 0; i < n - 1; i++) {
            if (G[p[i]][p[i + 1]] == 0) break;
            tmp += G[p[i]][p[i + 1]];
        }
        ans = max(ans, tmp);
    } while (next_permutation(p.begin(), p.end()));
    cout << ans << endl;
}


