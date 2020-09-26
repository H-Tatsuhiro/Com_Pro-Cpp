#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int h, m; cin >> h >> m;
    int ans = 60 - m;
    cout << ans + (18 - h - 1) * 60 << endl;
}
