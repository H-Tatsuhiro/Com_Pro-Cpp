#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int N; cin >> N;
    int n = 0, m = 10e9 + 1;
    for (int i = 0; i < N; ++i) {
         int a = 0; cin >> a;
         n = max(n, a), m = min(m, a);
    }
    printf("%d\n", n - m);
}
