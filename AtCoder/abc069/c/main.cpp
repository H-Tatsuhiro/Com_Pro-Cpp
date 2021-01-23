#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, x = 0, y = 0, z = 0; cin >> n;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        if (a % 4 == 0) x++;
        else if (a % 2 == 0) y++;
        else z++;
    }
    if (y >= 1) z++;
    if (z - x <= 1) cout << "Yes" << endl;
    else cout << "No" << endl;
}
