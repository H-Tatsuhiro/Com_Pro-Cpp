#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int m, h; cin >> m >> h;
    if (h % m == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}