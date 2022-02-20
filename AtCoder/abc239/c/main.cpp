#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    bool t = false;
    vector<int> dx = {1, 1, 2, 2, -1, -1, -2, -2}, dy = {2, -2, 1, -1, 2, -2, 1, -1};
    for (int i = 0; i < 8; i++) {
        int a = x1 + dx[i], b = y1 + dy[i];
        for (int j = 0; j < 8; j++) {
            int c = x2 + dx[j], d = y2 + dy[j];
            if (a == c && b == d) t = true;
        }
    }
    cout << (t ? "Yes" : "No") << endl;
}
