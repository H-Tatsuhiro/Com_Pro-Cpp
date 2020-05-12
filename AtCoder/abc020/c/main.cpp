#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
#include <iomanip>
using namespace std;

int H = 0, W = 0, T = 0;
vector<string> S(100, "");
int sx = 0, sy = 0, gx = 0, gy = 0;
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

bool dijkstra(int f) {
    vector<vector<long long>> M(100, vector<long long>(100, 0));
    for (int i = 0; i < 100; ++i) for (int j = 0; j < 100; ++j)  M[i][j] = 10000000000000;
    priority_queue<tuple<long long, int, int>, vector<tuple<long long, int, int>>, greater<tuple<long long, int, int>>> que;
    que.push(make_tuple(0, sy, sx));
    M[sy][sx] = 0;
    while(!que.empty()) {
        long long c = 0;
        int y = 0, x = 0;
        tie(c, y, x) = que.top(); que.pop();
        for (int i = 0; i < 4; ++i) {
            int ny = y + dy[i], nx = x + dx[i];
            if (!(0 <= ny && ny < H && 0 <= nx && nx < W)) continue;
            if (S[ny][nx] == '#') {
                if (M[ny][nx] > c + f) {
                    M[ny][nx] = c + f;
                    que.push(make_tuple(c + f, ny, nx));
                }
            }
            else {
                if (M[ny][nx] > c + 1) {
                    M[ny][nx] = c + 1;
                    que.push(make_tuple(c + 1, ny, nx));
                }
            }
        }
    }
    if (M[gy][gx] <= T) return true;
    else return false;
}

int main() {
    cin >> H >> W >> T;
    for (int i = 0; i < H; ++i) {
        cin >> S[i];
    }
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++ j) {
            if (S[i][j] == 'S') sy = i, sx = j;
            else if (S[i][j] == 'G') gy = i, gx = j;
        }
    }
    long long l = 0, r = 1000000000;
    while(r - l > 1) {
        int x = (l + r) / 2;
        if (dijkstra(x)) l = x;
        else r = x;
    }
    cout << l << endl;
}