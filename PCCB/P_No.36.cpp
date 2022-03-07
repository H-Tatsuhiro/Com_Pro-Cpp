//
// Created by Tatsuhiro Hashimoto on 2020/04/21.
//
#include <iostream>
using namespace std;

const int N, M;
const int MAX_N = 10000000, MAX_M = 10000000;
char field[MAX_N][MAX_M + 1];

void dfs(int x, int y) {
    field[x][y] = '.';

    for (int i = -1; i <= 1; ++i) {
        for (int j = -1; j <= 1; ++j) {
            int nx = x + i, ny = y + j;

            if(0 <= nx && nx < N && 0 <= ny && ny < M && field[nx][ny] == 'W') dfs(nx, ny);
        }
    }
    return ;
}

void solve() {
    int res = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (field[i][j] == 'W') {
                dfs(i, j);
                res++;
            }
        }
    }
    cout << res << endl;
}

int main() {
    cin >> N >> M;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> field[i][j];
        }
    }
    solve();
}