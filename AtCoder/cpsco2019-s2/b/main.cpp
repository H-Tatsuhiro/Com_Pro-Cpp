#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<pair<char, int>> v;
    int a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        char c; int x; cin >> c >> x;
        if (c == '+') a += x;
        else if (c == '*' && x > 0) b *= x;
    }
    cout << a * b << endl;
}
