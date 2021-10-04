#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> q(n, 0);
    for (int i = 0; i < n; i++) {
        int p; cin >> p;
        q[p - 1] = i + 1;
    }
    for (int i = 0; i < n; i++) {
        if (i == n - 1) cout << q[i] << endl;
        else cout << q[i] << " ";
    }
}
