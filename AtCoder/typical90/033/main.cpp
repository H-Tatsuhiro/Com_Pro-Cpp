#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int h, w; cin >> h >> w;
    int x = (w % 2 == 0 ? w / 2 : w / 2 + 1);
    int y = (h % 2 == 0 ? h / 2 : h / 2 + 1);
    if (h == 1 || w == 1) cout << h * w << endl;
    else cout << x * y << endl;
}
