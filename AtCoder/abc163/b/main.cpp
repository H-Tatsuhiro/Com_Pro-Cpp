#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(M, 0);
    int sum = 0;
    for (int i = 0; i < M; ++i) {
        cin >> A[i];
        sum += A[i];
    }
    if (sum <= N) cout << N - sum << endl;
    else cout << -1 << endl;
}
