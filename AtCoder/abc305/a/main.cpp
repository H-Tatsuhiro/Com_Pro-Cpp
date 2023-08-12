#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a;
    for (int i = 0; i <= 100; i += 5) a.push_back(i);
    for (int i = 0; i < a.size() - 1; i++) {
        if (a[i] <= n && n <= a[i + 1]) {
            cout << (abs(a[i] - n) <= abs(a[i + 1] - n) ? a[i] : a[i + 1]) << endl;
            return 0;
        }
    }
}


