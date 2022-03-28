#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n, sp, sm = 0, p = 1, m = 0, x = 0, y = 0, a, o = 1e9 + 7;
    cin >> n >> sp;
    for (int i = 1; i < n; i++) cin >> a, x = (p + m) % o, y = p, p = x, m = y, x = (sp + sm) + a * p, y = sp + (o - a) * m, sp = x % o, sm = y % o;
    cout << (sp + sm) % o << endl;
}
