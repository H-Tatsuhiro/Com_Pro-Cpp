#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    long long int cnt = 0;
    if (k < 0) k = -k;
    vector<long long int> m(n * 2 + 1, 0);
    for (int i = 2; i <= 2 * n; i++) m[i] = min(i - 1, 2 * n + 1 - i);
    for (int i = k; i <= 2 * n; i++) cnt += m[i] * m[i - k];
    cout << cnt << endl;
}
