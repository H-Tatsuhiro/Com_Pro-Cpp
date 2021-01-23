#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> b;
    bool tail = true;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        if (tail) b.push_back(a), tail = false;
        else b.insert(b.begin(), a), tail = true;
    }
    if (tail) {
        for (int i = 0; i < n; i++) {
            if (i == n - 1) cout << b[i] << endl;
            else cout << b[i] << " ";
        }
    }
    else {
        for (int i = n - 1; i >= 0; i--) {
            if (i == 0) cout << b[i] << endl;
            else cout << b[i] << " ";
        }
    }
}
