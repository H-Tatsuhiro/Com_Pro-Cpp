#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main() {
    int h, w; cin >> h >> w;
    vector<vector<char>> s(h, vector<char>(w, '.'));
    for (int i = 0; i < h; i++) for (int j = 0; j < w; j++) cin >> s[i][j];
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (i + 4 < h) {
                vector<char> aa = {s[i][j], s[i + 1][j], s[i + 2][j], s[i + 3][j], s[i + 4][j]};
                string a(aa.begin(), aa.end());
                if (a == "snuke") cout << i + 1 << " " << j + 1 << endl << i + 2 << " " << j + 1 << endl << i + 3 << " " << j + 1 << endl << i + 4 << " " << j + 1 << endl << i + 5 << " " << j + 1 << endl;
                reverse(a.begin(), a.end());
                if (a == "snuke") cout << i + 5 << " " << j + 1 << endl << i + 4 << " " << j + 1 << endl << i + 3 << " " << j + 1 << endl << i + 2 << " " << j + 1 << endl << i + 1 << " " << j + 1 << endl;
            }
            if (j + 4 < w) {
                vector<char> bb = {s[i][j], s[i][j + 1], s[i][j + 2], s[i][j + 3], s[i][j + 4]};
                string b(bb.begin(), bb.end());
                if (b == "snuke") cout << i + 1 << " " << j + 1 << endl << i + 1 << " " << j + 2 << endl << i + 1 << " " << j + 3 << endl << i + 1 << " " << j + 4 << endl << i + 1 << " " << j + 5 << endl;
                reverse(b.begin(), b.end());
                if (b == "snuke") cout << i + 1 << " " << j + 5 << endl << i + 1 << " " << j + 4 << endl << i + 1 << " " << j + 3 << endl << i + 1 << " " << j + 2 << endl << i + 1 << " " << j + 1 << endl;
            }
            if (i + 4 < h && j + 4 < w) {
                vector<char> cc = {s[i][j], s[i + 1][j + 1], s[i + 2][j + 2], s[i + 3][j + 3], s[i + 4][j + 4]};
                string c(cc.begin(), cc.end());
                if (c == "snuke") cout << i + 1 << " " << j + 1 << endl << i + 2 << " " << j + 2 << endl << i + 3 << " " << j + 3 << endl << i + 4 << " " << j + 4 << endl << i + 5 << " " << j + 5 << endl;
                reverse(c.begin(), c.end());
                if (c == "snuke") cout << i + 5 << " " << j + 5 << endl << i + 4 << " " << j + 4 << endl << i + 3 << " " << j + 3 << endl << i + 2 << " " << j + 2 << endl << i + 1 << " " << j + 1 << endl;
            }
            if (i - 4 >= 0 && j + 4 < w) {
                vector<char> dd = {s[i][j], s[i - 1][j + 1], s[i - 2][j + 2], s[i - 3][j + 3], s[i - 4][j + 4]};
                string d(dd.begin(), dd.end());
                if (d == "snuke") cout << i + 1 << " " << j + 1 << endl << i << " " << j + 2 << endl << i - 1 << " " << j + 3 << endl << i - 2 << " " << j + 4 << endl << i - 3 << " " << j + 5 << endl;
                reverse(d.begin(), d.end());
                if (d == "snuke") cout << i - 3 << " " << j + 5 << endl << i - 2 << " " << j + 4 << endl << i - 1 << " " << j + 3 << endl << i << " " << j + 2 << endl << i + 1 << " " << j + 1 << endl;
            }
        }
    }
}


