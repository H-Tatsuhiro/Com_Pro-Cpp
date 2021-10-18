#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a, b, c, d; cin >> a >> b >> c >> d;
    cout << min(a + b - c, d) << endl;
}
