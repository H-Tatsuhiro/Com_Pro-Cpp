#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
const int INF = 1001001001;
int main() {
    int N, M, X;
    cin >> N >> M >> X;
    vector<int> C(N, 0);
    vector<vector<int>> A(N, vector<int>(M, 0));
    for (int i = 0; i < N; ++i) {
        cin >> C[i];
        for (int j = 0; j < M; ++j) {
            cin >> A[i][j];
        }
    }
    int ans = INF;
    for (int i = 0; i < 1<<N; ++i) {
        int cost = 0;
        vector<int> D(M, 0);
        for (int j = 0; j < N; ++j) {
            if (i>>j&1) {
                cost += C[j];
                for (int k = 0; k < M; ++k) D[k] += A[j][k];
            }
        }
        bool T = true;
        for (int k = 0; k < M; ++k) if (D[k] < X) T = false;
        if (T) ans = min(ans, cost);
    }
    if (ans == INF) cout << -1 << endl;
    else cout << ans << endl;
}
