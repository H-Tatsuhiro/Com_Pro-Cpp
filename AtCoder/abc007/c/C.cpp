//
// Created by Tatsuhiro Hashimoto on 2020/04/26.
//
#include <iostream>
#include <queue>
#include <vector>
#define P pair<int, int>
using namespace std;

int R, C, sr, sc, gr, gc;
vector<int> X_M = {0, 1, 0, -1};
vector<int> Y_M = {1, 0, -1, 0};

void bfs(vector<vector <char>>& vec, vector<vector <int>>& Z) {
      queue<P> que;
      que.push(P(sr, sc));
      Z[sr][sc] = 0;
      while (que.size()) {
        P p = que.front(); que.pop();
        if (p.first == gr && p.second == gc) break;
          for (int i = 0; i < 4; ++i) {
            int nr = p.first + X_M[i], nc = p.second + Y_M[i];
            if (0 <= nr && nr < R && 0 <= nc && nc < C && vec[nr][nc] != '#' && Z[nr][nc] == 100000) {
                que.push(P(nr,nc));
                Z[nr][nc] = Z[p.first][p.second] + 1;
            }
         }
      }
    cout << Z[gr][gc] << endl;
}

int main() {
     cin >> R >> C >> sr >> sc >> gr >> gc;
     sr -= 1, sc -= 1, gr -= 1, gc -= 1;
     vector<vector <char>> X(R, vector<char>(C, '#'));
     vector<vector <int>> num(R, vector<int>(C, 100000));
     for (int i = 0; i < R; ++i) {
         for (int j = 0; j < C; ++j) {
            cin >> X[i][j];
         }
     }
     bfs(X, num);
}