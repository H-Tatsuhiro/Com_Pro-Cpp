//
// Created by Tatsuhiro Hashimoto on 2020/02/29.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    int ans = 0;
    vector<int> A{N};
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            for (int k = j + 1; k < N; ++k) {
                int len = A[i] + A[j] + A[k];
                int X = max(A[i], max(A[j], A[k]));
                int Y = len - X;

                if (X < Y) {
                    ans = max(ans, len);
                }
            }
        }
    }
    cout << ans << endl;
}

