#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, a, b; cin >> n >> a >> b;
    if (n - (a + b) >= 0) cout << 0 << endl;
    else cout << - (n - (a + b)) << endl;
}
