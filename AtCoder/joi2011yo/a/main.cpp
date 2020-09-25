#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a, b, c, d; cin >> a >> b >> c >> d;
    int x = a + b + c + d;
    cout << x / 60 << endl;
    x %= 60;
    cout << x << endl;
}
