#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, a; cin >> n >> a;
    for (int i = 0; i < n; i++) {
        char c; int b; cin >> c >> b;
        if (c == '+') {
            cout << i + 1 << ':' << a + b << endl;
            a += b;
        }
        else if (c == '-') {
            cout << i + 1 << ':' << a - b << endl;
            a -= b;
        }
        else if (c == '*') {
            cout << i + 1 << ':' << a * b << endl;
            a *= b;
        }
        else if (c == '/' && b != 0) {
            cout << i + 1 << ':' << a / b << endl;
            a /= b;
        }
        else {
            cout << "error" << endl;
            break;
        }
    }
}
