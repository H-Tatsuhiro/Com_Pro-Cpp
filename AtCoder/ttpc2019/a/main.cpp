#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a, b, t; cin >> a >> b >> t;
    int div = b - a;
    while(true) {
        b += div;
        if (b >= t) {
            cout << b << endl;
            break;
        }
    }
}
