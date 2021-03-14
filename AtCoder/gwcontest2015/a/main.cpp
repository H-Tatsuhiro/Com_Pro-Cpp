#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    vector<int> score = {25,39,51,76,163,111,136,128,133,138};
    unordered_map<int, bool> Map;
    vector<int> v;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                for (int l = 0; l < 2; l++) {
                    for (int p = 0; p < 2; p++) {
                        for (int q = 0; q < 2; q++) {
                            for (int g = 0; g < 3; g++) {
                                for (int a = 0; a < 2; a++) {
                                    for (int b = 0; b < 2; b++) {
                                        for (int c = 0; c < 2; c++) {
                                            vector<int> now(10, 0);
                                            if (i == 1) now[0] = score[0];
                                            if (j == 1) now[1] = score[1];
                                            if (k == 1) now[2] = score[2];
                                            if (l == 1) now[3] = score[3];
                                            if (p == 1) now[4] = score[4];
                                            if (q == 1) now[5] = score[5];
                                            if (g == 1) now[6] = score[6];
                                            else if (g == 2) now[6] = 58;
                                            if (a == 1) now[7] = score[7];
                                            if (b == 1) now[8] = score[8];
                                            if (c == 1) now[9] = score[9];
                                            int sum = 0;
                                            for (auto x : now) sum += x;
                                            if (!Map[sum]) {
                                                v.push_back(sum);
                                                Map[sum] = true;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    sort(v.begin(), v.end());
    for (auto x : v) cout << x << endl;
}
