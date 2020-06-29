#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int N, S, T, W; cin >> N >> S >> T >> W;
    vector<int> A(N, 0);
    int cnt = 0;
    for (int i = 1; i < N; i++) cin >> A[i];
    for (int i = 0; i < N; i++) {
        W += A[i];
        if (S <= W && W <= T) cnt++;
    }
    printf("%d\n", cnt);
}
