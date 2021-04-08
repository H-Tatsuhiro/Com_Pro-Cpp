#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, t; cin >> n >> t;
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        int a; cin >> a; sum += a;
    }
    if (sum % t != 0) cout << sum / t + 1 << endl;
    else cout << sum / t << endl;
}
