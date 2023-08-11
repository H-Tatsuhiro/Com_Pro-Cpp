#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int h, w;
    cin >> h >> w;
    vector <string> a(2 * h, ""), b(h, "");
    for (int i = 0; i < h; i++) cin >> a[i];
    for (int i = 0; i < h; i++) cin >> b[i];
    for (int i = 0; i < h; i++) a[i] += a[i];
    for (int i = h; i < 2 * h; i++) a[i] = a[i - h];
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            vector<string> c;
            for (int k = 0; k < h; k++) c.push_back(a[i + k].substr(j, w));
            if (b == c) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}


