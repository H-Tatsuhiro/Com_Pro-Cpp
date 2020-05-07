//
// Created by Tatsuhiro Hashimoto on 2020/05/07.
//
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int N;
    cin >> N;
    double sum = 0.0, x = 0.0;
    for (int i = 0; i < N; ++i) {
        double tmp = 0.0;
        cin >> tmp;
        if (tmp != 0.0) x++;
        sum += tmp;
    }
    double ans = sum / x;
    if (fmod(ans, 1.0) != 0.0) ans = (ans - fmod(ans,1.0)) + 1;
    cout << ans << endl;
}
