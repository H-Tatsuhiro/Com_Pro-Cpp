#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    long long int x, sum = 0; cin >> x;
    x *= 100;
    for (int i = 0; i < n; i++) {
        long long int a, b; cin >> a >> b;
        sum += a * b;
        if (sum > x) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
