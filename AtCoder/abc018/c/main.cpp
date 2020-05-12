#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int R, C, K;
    cin >> R >> C >> K;
    vector<string> S(R, "");
    for (int i = 0; i < R; ++i) cin >> S[i];
    vector<vector<int>> up(R, vector<int>(C, 0));
    vector<vector<int>> down(R, vector<int>(C, 0));

    for (int i = 0; i < C; ++i) {
        int cnt = 0;
        for (int j = 0; j < R; ++j) {
            if (S[j][i] == 'x') cnt = 0;
            else cnt++;
            up[j][i] = cnt;
        }
    }

    for (int i = 0; i < C; ++i) {
        int cnt = 0;
        for (int j = R - 1; j > 0; --j) {
            if (S[j][i] == 'x') cnt = 0;
            else cnt++;
            down[j][i] = cnt;
        }
    }

    int count = 0;

    for (int i = K - 1; i <= R - K; ++i) {
        for (int j = K - 1; j <= C - K; ++j) {
            bool T = true;
            for (int k = j - K + 1; k <= j ; ++k) {
                if (up[i][k] < (k - (j - K)) || down[i][k] < (k - (j - K))) {
                    T = false;
                    break;
                }
            }
            for (int k = j + 1; k <= j + K - 1; ++k) {
                if (up[i][k] < (j + K - k) || down[i][k] < (j + K - k)) {
                    T = false;
                    break;
                }
            }
            if (T) count++;
        }
    }

    cout << count << endl;
}
