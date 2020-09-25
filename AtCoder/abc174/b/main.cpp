#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int N, D, cnt = 0; cin >> N >> D;
    for (int i = 0; i < N; i++) {
        int x, y; cin >> x >> y;
        if (D >= sqrt(pow(x, 2) + pow(y, 2))) cnt++;
    }
    cout << cnt << endl;
}
