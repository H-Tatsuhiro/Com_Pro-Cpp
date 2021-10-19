#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a, b; char c; cin >> a >> c >> b;
    if (c == '+') cout << a + b;
    else if (c == '-') cout << a - b;
    else if (c == '*') cout << a * b;
    else if (c == '/' && b != 0) cout << a / b;
    else cout << "error";
    cout << endl;
}
