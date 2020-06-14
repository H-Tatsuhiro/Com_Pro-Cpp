#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int N; cin >> N;
    vector<int> A(N, 0);
    vector<int> B(N - 1, 0);
    for (int i = 0; i < N - 1; ++i) cin >> B[i];
    for (int i = 1; i < N; ++i) {
        if (i == 1) A[i - 1] = B[i - 1];
        else {
            if (A[i - 1] < B[i - 1]) int nothing;
            else if (A[i - 1] >= B[i - 1]) A[i - 1] = B[i - 1];
        }
        A[i] = B[i - 1];
    }
    int sum = 0;
    for (int i = 0; i < N; ++i) {
        sum += A[i];
    }
    printf("%d\n", sum);
}
