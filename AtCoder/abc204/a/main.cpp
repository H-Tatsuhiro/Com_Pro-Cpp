#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int x, y; cin >> x >> y;
    vector<int> v(3, 0);
    v[x] = 1, v[y] = 1;
    if (x == y) cout << x << endl;
    else for (int i = 0; i < 3; i++) if (v[i] == 0) cout << i << endl;
}