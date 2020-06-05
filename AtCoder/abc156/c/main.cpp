#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int N; cin >> N;
    vector<int> X(N, 0);
    for (int i = 0; i < N; ++i) cin >> X[i];
    vector<int> C(100, 0);
    int ans = 10000000;
    for (int i = 1; i <= 100 ; ++i) {
        int cost_sum = 0;
        for (int j = 0; j < N; ++j) {
            cost_sum += pow(X[j] - i, 2);
        }
        ans = min(ans, cost_sum);
    }
    cout << ans << endl;
}
