#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, a, b; cin >> n >> a >> b;
    long long int sum = 0;
    for (int i = 1; i < n; i++) {
        int x, y; cin >> x >> y;
        sum += abs(a - x) + abs(b - y);
        a = x, b = y;
    }
    cout << sum << endl;
}
