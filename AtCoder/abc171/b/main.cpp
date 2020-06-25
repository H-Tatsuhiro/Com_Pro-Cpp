#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int N, K, sum = 0; cin >> N >> K;
    vector<int> P(N, 0);
    for (int i = 0; i < N; i++) cin >> P[i];
    sort(P.begin(), P.end());
    for (int i = 0; i < K; i++) sum += P[i];
    printf("%d\n", sum);
}
