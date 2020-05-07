//
// Created by Tatsuhiro Hashimoto on 2020/05/07.
//
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int N, K;
vector<vector<int>> T(10, vector<int>(10, 0));

bool dfs(int p, int val) {
    if (p == N) return (val == 0);
    for (int i = 0; i < K; ++i) {
        if (dfs(p + 1, val ^ T[p][i])) return true;
    }
    return false;
}

int main() {
    cin >> N >> K;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < K; ++j) {
            cin >> T[i][j];
        }
    }
    if (dfs(0, 0)) cout << "Found" << endl;
    else cout << "Nothing" << endl;
}