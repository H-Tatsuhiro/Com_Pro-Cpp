#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a, b, c; cin >> a >> b >> c;
    if (a * a + b * b < c * c) cout << "Yes" << endl;
    else cout << "No" << endl;
}
