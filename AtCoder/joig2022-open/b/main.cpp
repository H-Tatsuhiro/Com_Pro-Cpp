#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    int cnt = 0;
    for (int i = 0; i < n - 2; i++) for (int j = i + 1; j < n - 1; j++) for (int k = j + 1; k < n; k++) if (a[i] * a[j] == a[k]) cnt++;
    cout << cnt << endl;
}
