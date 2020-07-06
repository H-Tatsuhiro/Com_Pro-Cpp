// Could solve
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int N, M, Q; cin >> N >> M >> Q;
    vector<vector<int>> query(Q, vector<int>(3, 0));
    for (int i = 0; i < Q; ++i) {
        int x = 0, y = 0, z = 0;
        cin >> x;
        if (x == 1) {
            cin >> y;
        }
        else {
            cin >> y >> z;
        }
        query[i][0] = x; query[i][1] = y; query[i][2] = z;
    }

    vector<int> score(N, 0);
    vector<int> ac_cnt(M, 0);
    for (int i = 0; i < Q; ++i) {
        if (query[i][0] == 1)

            cout << score[query[i][1] - 1] << endl;

        }
        else {
            int n = query[i][1] - 1, m = query[i][2] - 1;

            score[n] += N - ac_cnt[m]

            ac_cnt[m]++;
        }
    }
}