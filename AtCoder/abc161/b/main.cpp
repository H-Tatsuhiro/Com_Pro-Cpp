#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N, 0);
    int sum = 0;
    for (int i = 0; i < N; ++i) {
        cin >> A[i]; sum += A[i];
    }
    int cnt = 0;
    double F = sum * (1 / (4.0 * M));
    for (int i = 0; i < N; ++i) {
        if (A[i] >= F) cnt++;
    }
    if (cnt >= M) cout << "Yes" << endl;
    else cout << "No" << endl;
}
