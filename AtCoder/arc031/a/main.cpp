#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string n; cin >> n;
    for (int i = 0; i < n.length() / 2; i++) {
        if (n[i] != n[n.length() - i - 1]) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
