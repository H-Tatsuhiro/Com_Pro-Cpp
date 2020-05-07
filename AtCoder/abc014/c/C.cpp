//
// Created by Tatsuhiro Hashimoto on 2020/05/07.
//
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<int> A(N, 0);
    vector<int> B(N, 0);
    vector<int> sum(1000001, 0);
    for (int i = 0; i < N; ++i) {
        cin >> A[i] >> B[i];
        sum[A[i]]++; sum[B[i] + 1]--;
    }
    int ans = sum[0];
    for (int j = 1; j <= 1000000; ++j) {
        sum[j] += sum[j - 1];
        ans = max(ans, sum[j]);
    }
    cout << ans << endl;
}