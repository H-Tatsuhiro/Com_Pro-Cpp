#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int N, K; cin >> N >> K;
    vector<int> A(N, 0);
    for (int i = 0; i < N; ++i) cin >> A[i];
    for (int i = K; i < N; i++) {
        if (A[i] > A[i - K]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}
