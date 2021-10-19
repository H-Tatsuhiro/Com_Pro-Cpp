#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int N, k, b; cin >> N >> k >> b;
    vector<int> x(k, 0), y(k, 0), n(b, 0), m(b, 0), c(b, 0);
    vector<vector<char>> p(N, vector<char>(N, '.'));
    vector<vector<vector<char>>> s;
    for (int i = 0; i < k; i++) cin >> x[i] >> y[i];
    for (int i = 0; i < b; i++) {
        cin >> n[i] >> m[i] >> c[i];
        vector<vector<char>> ss(n[i], vector<char>(m[i], '.'));
        for (int j = 0; j < n[i]; j++) for (int k = 0; k < m[i]; k++) cin >> ss[j][k];
        s.push_back(ss);
    }
    int cnt_ply = 0;
    vector<int> use_ply(b, 0);

    vector<pair<int, pair<int, int>>> ply;

    // Use ply 1
    for (int pp = 0; pp < k; pp++) {
        //たて
        for (int i = 0; i < N; i++) {
            if (p[x[pp]][i] == '.') {
                p[x[pp]][i] = '#';
                cnt_ply++;
                use_ply[0]++;
                ply.push_back(make_pair(1, make_pair(x[pp], i)));
            }
        }
        //よこ
        for (int i = 0; i < N; i++) {
            if (p[i][y[pp]] == '.') {
                p[i][y[pp]] = '#';
                cnt_ply++;
                use_ply[0]++;
                ply.push_back(make_pair(1, make_pair(i, y[pp])));
            }
        }
    }

    cout << cnt_ply << endl;
    for (auto q: ply) cout << q.first << " " << q.second.first << " " << q.second.second << endl;
    long long int S = 0;
    for (int i = 0; i < b; i++) S += (c[i] * use_ply[i]);
    cerr << round(10e8 / S) << endl;
}