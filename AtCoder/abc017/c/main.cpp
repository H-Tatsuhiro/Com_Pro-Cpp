#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int N, M;
    cin >> N >> M;
    vector<int> L(N, 0);
    vector<int> R(N, 0);
    vector<int> S(N, 0);
    vector<int> sum(M + 1, 0);
    int ans = 0;
    for (int i = 0; i < N; ++i) {
        cin >> L[i] >> R[i] >> S[i];
        sum[L[i]] += S[i]; sum[R[i] + 1] -= S[i];
        ans += S[i];
    }
    for (int i = 0; i < M; ++i) {
        sum[i + 1] += sum[i];
    }
    int point = 0;
    for (int i = 1; i <= M; ++i) {
       point = max(point, ans - sum[i]);
    }
    cout << point << endl;
}
