//
// Created by Tatsuhiro Hashimoto on 2020/04/21.
//
#include <iostream>
#include <queue>

using namespace std;

const int INF = 23170;
const int MAX_N = 23170, MAX_M = 23170;

typedef pair<int, int> P;

char maze[MAX_N][MAX_M + 1];
const int N, M;
int sx, sy;
int gx, gy;

int d[MAX_N][MAX_M];

int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

int bfs() {
    queue<P> que;
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j) d[i][j] = INF;
    que.push(P(sx, sy));
    d[sx][sy] = 0;

    while (que.size()) {
        P p = que.front(); que.pop();
        if (p.first == gx && p.second == gy) break;

        for (int i = 0; i < 4; ++i) {
            int nx = p.first + dx[i], ny = p.second + dy[i];

            if (0 <= nx && nx < N && 0 <= ny && ny < M && maze[nx][ny] != '#' && d[nx][ny] == INF) {
                que.push(P(nx, ny));
                d[nx][ny] = d[p.first][p.second] + 1;
            }
        }
    }
    return d[gx][gy];
}

void solve() {
    int res = bfs();
    cout << res << endl;
}

int main() {
    cin >> N >> M;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> maze[i][j];
            if (maze[i][j] == 'S') {
                sx = i;
                sy = j;
            }
            if (maze[i][j] == 'G') {
                gx = i;
                gy = j;
            }
        }
    }
    solve();
}