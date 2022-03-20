#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; string t; cin >> n >> t;
    int x = 0, y = 0, v = 0;
    for (int i = 0; i < n; i++) {
        if (t[i] == 'S') {
            if (v == 0) x++;
            else if (v == 1) y--;
            else if (v == 2) x--;
            else y++;
        }
        else {
            if (v == 0) v = 1;
            else if (v == 1) v = 2;
            else if (v == 2) v = 3;
            else v = 0;
        }
    }
    cout << x << ' ' << y << endl;
}
