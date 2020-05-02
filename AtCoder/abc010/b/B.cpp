//
// Created by Tatsuhiro Hashimoto on 2020/05/01.
//
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<int> A(N, 0);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    int ans = 0;
    for (int i = 0; i < N; ++i) {
        if (A[i] == 5) ans += 2;
        else if (A[i] == 6) ans += 3;
        else if (A[i] % 2 == 0) ans += 1;
    }
    cout << ans << endl;
}
