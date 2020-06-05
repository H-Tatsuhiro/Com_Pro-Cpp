#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int N; cin >> N;
    vector<int> A(N, 0);
    for (int i = 0; i < N; ++i) cin >> A[i];
    sort(A.begin(), A.end());
    bool T = true;
    for (int i = 0; i < N - 1; ++i) {
        if (A[i] == A[i + 1]) {
            T = false; break;
        }
    }
    if (T) cout << "YES" << endl;
    else cout << "NO" << endl;
}
