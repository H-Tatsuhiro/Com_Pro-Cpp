#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int H1, M1, H2, M2, K;
    cin >> H1 >> M1 >> H2 >> M2 >> K;
    int time_s = (H1 * 60) + M1;
    int time_e = (H2 * 60) + M2;
    int ans = (time_e - time_s) - K;
    cout << ans << endl;
}
