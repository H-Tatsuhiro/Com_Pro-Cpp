#include <iostream>
#include <queue>
#include <vector>
#define P pair<int, int>
using namespace std;

int R, C, sr, sc, gr, gc, cr, cc;
vector<int> X_M = {0, 1, 0, -1};
vector<int> Y_M = {1, 0, -1, 0};

void bfs(int a, int b, int c, int d, vector<vector <char>>& vec, vector<vector <int>>& Z) {
    queue<P> que;
    que.push(P(a, b));
    Z[a][b] = 0;
    while (que.size()) {
        P p = que.front(); que.pop();
        if (p.first == c && p.second == d) break;
        for (int i = 0; i < 4; ++i) {
            int nr = p.first + X_M[i], nc = p.second + Y_M[i];
            if (0 <= nr && nr < R && 0 <= nc && nc < C && vec[nr][nc] != '#' && Z[nr][nc] == 100000) {
                que.push(P(nr,nc));
                Z[nr][nc] = Z[p.first][p.second] + 1;
            }
        }
    }
}

int main() {
    cin >> R >> C;
    vector<vector <char>> X(R, vector<char>(C, '#'));
    vector<vector <int>> num(R, vector<int>(C, 100000));
    vector<vector <int>> num_num(R, vector<int>(C, 100000));
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            cin >> X[i][j];
            if (X[i][j] == 'S') sr = i, sc = j;
            else if (X[i][j] == 'C') cr = i, cc = j;
            else if (X[i][j] == 'G') gr = i, gc = j;
        }
    }
    bfs(sr, sc, cr, cc, X, num);
    if (num[cr][cc] == 100000) {
        cout << -1 << endl;
        return 0;
    }
    bfs(cr, cc, gr, gc, X, num_num);
    if (num_num[gr][gc] == 100000) {
        cout << -1 << endl;
        return 0;
    }
    cout << num[cr][cc] + num_num[gr][gc] << endl;
    return 0;
}