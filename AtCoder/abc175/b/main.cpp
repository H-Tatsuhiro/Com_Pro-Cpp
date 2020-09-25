#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0);
    int cnt = 0;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            for (int k = 0; k < j; k++) {
                if ((a[i] != a[j] && a[j] != a[k] && a[i] != a[k]) && a[i] < a[j] + a[k]) cnt++;
            }
        }
    }
    cout << cnt << endl;
}
