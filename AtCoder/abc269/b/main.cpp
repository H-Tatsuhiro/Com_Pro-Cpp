#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    vector<string> v(10, "");
    for (int i = 0; i < 10; i++) cin >> v[i];
    int a = 0, b = 0, c = 0, d = 0;
    for (int i = 0; i < 10; i++) for (int j = 0; j < 10; j++) if (v[i][j] == '#' && a == 0 && c == 0) c = j + 1, a = i + 1;
    for (int i = 9; i >= 0; i--) for (int j = 9; j >= 0; j--) if (v[i][j] == '#' && b == 0 && d == 0) d = j + 1, b = i + 1;
    cout << a << " " << b << endl << c << " " << d << endl;
}
