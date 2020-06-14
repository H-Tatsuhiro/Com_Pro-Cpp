#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int X, N; cin >> X >> N;
    vector<bool> flag(10000, false);
    for (int i = 0; i < N; ++i) {
        int a = 0;
        cin >> a;
        flag[a] = true;
    }
    int ans = 0, down = X - 1, now = X, up = X + 1;
    while(true) {
        if (flag[X] == true) {
            if (flag[down] == false) {
                ans = down;
                break;
            }
            else if (flag[up] == false) {
                ans = up;
                break;
            }
            else {
                down--; up++;
            }
        }
        else {
            ans = X;
            break;
        }
    }
    printf("%d\n", ans);
}
