#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int v; cin >> v;
    vector<int> a(3, 0);
    vector<char> b = {'F', 'M', 'T'};
    for (int i = 0; i < 3; i++) cin >> a[i];
    for (int i = 0; i < 10e6; i++) {
        v -= a[i % 3];
        if (v < 0) {
            cout << b[i % 3] << endl;
            break;
        }
    }
}
