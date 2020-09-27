#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int a; cin >> a; sum += a;
        if (sum >= k) {
            cout << i + 1 << endl;
            return 0;
        }
    }
}
