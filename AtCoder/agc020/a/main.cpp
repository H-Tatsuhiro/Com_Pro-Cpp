#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, a, b; cin >> n >> a >> b;
    if ((abs(b - a) - 1) % 2 == 0) cout << "Borys" << endl;
    else cout << "Alice" << endl;
}
