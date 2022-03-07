//
// Created by Tatsuhiro Hashimoto on 2020/02/29.
//
#include <bits/stdc++.h>>
using namespace std;
int A = 0;
void input() {
    cin >> A;
}
void solve() {
    int L, N;
    cin >> L >> N;
    vector<int> X(N);
    for (int i = 0; i < N; ++i) {
        cin >> X[i];
    }

    int minT = 0;
    for (int i = 0; i < N; ++i) {
        minT = max(minT, min(X[i], L - X[i]));
    }

    int maxT = 0;
    for (int j = 0; j < N; ++j) {
        maxT = max(maxT, max(X[j], L - X[j]));
    }
    cout << minT << " " << maxT << endl;
}

int main() {
    input();
    for (int i = 0; i < A; ++i) {
        solve();
    }
}
