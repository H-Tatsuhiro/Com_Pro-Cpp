#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int a, b; cin >> a >> b;
    if (a < 0 && b > 0) cout << abs(a - b) - 1 << endl;
    else cout << abs(a - b) << endl;
}
