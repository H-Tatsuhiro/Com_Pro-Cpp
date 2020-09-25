#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, sum = 0; cin >> n;
    for (int i = 1; i <= n; i++) {
        sum += (n - i + 1);
    }
    cout << sum << endl;
}
