#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    bool t = true;
    for (int i = 0; i < n - 1; i++) if (a[i] != a[i + 1]) t = false;
    cout << (t ? "Yes" : "No") << endl;
}


