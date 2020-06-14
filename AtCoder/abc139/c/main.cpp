
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int N; cin >> N;
    vector<int> H(N, 0);
    for (int i = 0; i < N; ++i) cin >> H[i];
    int ans = 0, cnt = 0;
    for (int i = 0; i < N - 1; ++i) {
        if (H[i] >= H[i + 1]) cnt++;
        else cnt = 0;
        ans = max(ans, cnt);
    }
    cout << ans << endl;
}