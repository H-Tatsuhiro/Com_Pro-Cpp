#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
vector<vector<int>> D(10, vector<int>(10, 1000000));
void wf(int x) {
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < x; ++j) {
            for (int k = 0; k < x; ++k) {
                D[i][j] = min(D[i][j], D[i][k] + D[k][j]);
            }
        }
    }
}
int main() {
    int N, M;
    cin >> N >> M;
    for (int i = 0; i < M; ++i) {
        int A = 0, B = 0;
        cin >> A >> B;
        A--; B--;
        D[A][B] = 1; D[B][A] = 1;
    }
    for (int j = 0; j < N; ++j) D[j][j] = 0;
    wf(N);
    for (int i = 0; i < N; ++i) {
        int count = 0;
        for (int j = 0; j < N; ++j) {
            if (D[i][j] == 2) count++;
        }
        cout << count << endl;
    }
}
