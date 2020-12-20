#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0);
    int maxx = 0, sp = -1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (maxx < a[i]) sp = i, maxx = a[i];
    }
    int sum = 0;
    if (sp != 0) {
        for (int i = 0; i < sp; i++) sum += a[i];
    }
    cout << sum << endl;
    sum = 0;
    if (sp != n - 1) {
        for (int i = sp + 1; i < n; i++) sum += a[i];
    }
    cout << sum << endl;
}
