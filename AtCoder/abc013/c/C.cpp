//
// Created by Tatsuhiro Hashimoto on 2020/05/05.
//
#include <iostream>
using namespace std;

int main() {
    long long N, H, A, B, C, D, E;
    cin >> N >> H >> A >> B >> C >> D >> E;
    long long ans = 9223372036854;
    for (int i = 0; i < N; ++i) {
        long long tmp_1 = N * E - i * E - H - B * i;
        long long tmp_2 = (tmp_1 / (D + E)) + 1;
        if (tmp_1 <= 0) tmp_2 = 0;
        long long tmp_3 = i * A + C * tmp_2;
        ans = min(ans, tmp_3);
    }
    cout << ans << endl;
}
