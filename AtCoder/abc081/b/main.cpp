#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int N, cnt = 10e7; cin >> N;
    for (int i = 0; i < N; ++i) {
        int x, t = 0; cin >> x;
        while (x % 2 == 0) {
            x /= 2, t++;
        }
        cnt = min(cnt, t);
    }
    printf("%d\n", cnt);
}
