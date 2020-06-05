#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int N; cin >> N;
    vector<int> P(N, 0);
    for (int i = 0; i < N; ++i) cin >> P[i];
    int cnt = 0, n_min = 10000000;
    for (int i = 0; i < N; ++i) {
        n_min = min(n_min, P[i]);
        if (n_min >= P[i])  cnt++;
    }
    printf("%d\n", cnt);
}

