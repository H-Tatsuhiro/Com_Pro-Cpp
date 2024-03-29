#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    int ans = 0;
    for (int i = 0; i < n; i++) {
        while (i + 1 < n && a[i] == a[i + 1]) i++;
        if (i + 1 < n && a[i] > a[i + 1]) while (i + 1 < n && a[i] >= a[i + 1]) i++;
        else if (i + 1 < n && a[i] < a[i + 1]) while (i + 1 < n && a[i] <= a[i + 1]) i++;
        ans++;
    }
    cout << ans << endl;
}
