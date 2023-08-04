#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a, b; cin >> a >> b;
    if (a > b) swap(a, b);
    cout << ((2 * a == b || 2 * a + 1 == b) ? "Yes" : "No") << endl;
}


