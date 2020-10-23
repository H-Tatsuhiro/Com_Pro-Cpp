#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, a, b, cnt = 0; cin >> n >> a >> b;
    if (n < 5) cout << n * b << endl;
    else cout << (n - 5) * a + 5 * b << endl;
}
