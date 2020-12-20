#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a, b, c, d; cin >> a >> b >> c >> d;
    a = min(a, b), c = min(c, d), a = min(a, c);
    cout << a << endl;
}
