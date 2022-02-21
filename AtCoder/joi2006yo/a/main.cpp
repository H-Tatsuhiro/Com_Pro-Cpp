#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    int x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        if (a > b) x += a + b;
        else if (a < b) y += a + b;
        else x += a, y += b;
    }
    cout << x << " " << y << endl;
}
