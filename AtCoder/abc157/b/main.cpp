#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    vector<vector<int>> A(3, vector<int>(3, 0));
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> A[i][j];
        }
    }
    int N;
    cin >> N;
    vector<int> B(N, 0);
    for (int k = 0; k < N; ++k) {
        cin >> B[k];
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (B[k] == A[i][j]) {
                    A[i][j] = 0;
                }
            }
        }
    }
    bool T = false;
    for (int i = 0; i < 3; ++i) {
        if (A[i][0] == 0 && A[i][1] == 0 && A[i][2] == 0) T = true;
    }
    for (int j = 0; j < 3; ++j) {
        if (A[0][j] == 0 && A[1][j] == 0 && A[2][j] == 0) T = true;
    }
    if ((A[0][0] == 0 && A[1][1] == 0 && A[2][2] == 0) || (A[0][2] == 0 && A[1][1] == 0 && A[2][0] == 0)) T = true;
    if (T) cout << "Yes" << endl;
    else cout << "No" << endl;
}
