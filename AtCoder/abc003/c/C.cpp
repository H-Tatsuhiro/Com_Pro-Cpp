//
// Created by Tatsuhiro Hashimoto on 2020/04/24.
//
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
int main() {
    int N, K;
    cin >> N >> K;
    double ans = 0;
    vector<int> R(N, 0);
    vector<int> R_1(K, 0);
    int flag = 0;
    for (int i = 0; i < N; ++i) {
        cin >> R[i];

    }
    sort(R.begin(), R.end(), greater<int>());
    for (int j = 0; j < K; ++j) {
        R_1[j] = R[j];
    }
    sort(R_1.begin(), R_1.end());
    for (int f = 0; f < R_1.size(); ++f) {
        ans = (ans + R_1[f]) / 2.0;
    }
    cout << fixed << setprecision(5) << ans << endl;
}