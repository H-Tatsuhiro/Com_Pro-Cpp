#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int N, M, K; cin >> N >> M >> K;
    vector<int> A(N, 0);
    vector<int> B(M, 0);
    for (int i = 0; i < N; ++i) cin >> A[i];
    long long int sum = 0;
    for (int i = 0; i < M; ++i) {
        cin >> B[i]; sum += B[i];
    }
    int j = M;
    int ans = 0;
    for (int i = 0; i < N + 1; ++i) {
        while (j > 0 && sum > K) {
            --j; sum -= B[j];
        }
        if (sum > K) break;
        ans = max(ans, i + j);
        if (i == N) break;
        sum += A[i];
    }
    printf("%d\n", ans);
}
