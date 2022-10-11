#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int k; cin >> k;
    if (k >= 60) {
        cout << "22:";
        if (k - 60 < 10) cout << 0 << k - 60 << endl;
        else cout << k - 60 << endl;
    }
    else {
        cout << "21:";
        if (k < 10) cout << 0 << k << endl;
        else cout << k << endl;
    }
}
