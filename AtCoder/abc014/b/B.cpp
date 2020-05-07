//
// Created by Tatsuhiro Hashimoto on 2020/05/06.
//
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int N, X;
    cin >> N >> X;
    vector<int> A(N, 0);
    vector<int> bit(N, 0);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    int ans = 0;
    for (int i = 0; i < N; ++i) {
        int bit_tmp = X % 2;
        X /= 2;
        bit[i] = bit_tmp;
    }
    for (int j = 0; j < N; ++j) {
        if (bit[j] == 1) ans += A[j];
    }
    cout << ans << endl;
}