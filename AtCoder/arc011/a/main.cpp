#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int m, n, N; cin >> m >> n >> N;
    int sum = 0, md = 0;
    while (N + md >= m) {
        sum += N;
        md += N % m;
        N = (N / m) * n;
        if (md >= m) {
            int tmp = md / m;
            md = md % m;
            N += tmp * n;
        }
    }
    sum += N;
    cout << sum << endl;
}
