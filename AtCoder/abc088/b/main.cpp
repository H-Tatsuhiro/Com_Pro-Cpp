#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int N; cin >> N;
    vector<int> a(N, 0);
    for (int i = 0; i < N; ++i) cin >> a[i];
    sort(a.begin(), a.end());
    int x = 0, y = 0, f = 0;
    for (int i = N - 1; i >= 0; --i) {
        if (f == 0) x += a[i], f++;
        else y += a[i], f--;
    }
    printf("%d\n", x - y);
}
