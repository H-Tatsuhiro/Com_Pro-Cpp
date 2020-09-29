#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int l, r; cin >> l >> r;
    int cnt = 0;
    vector<int> a(l, 0), b(r, 0);
    for (int i = 0; i < l; i++) cin >> a[i];
    for (int i = 0; i < r; i++) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int low = 0;
    for (int i = 0; i < l; i++) {
        for (int j = low; j < r; j++) {
            if (a[i] == b[j]) {
                cnt++;
                low = j + 1;
                break;
            }
        }
    }
    cout << cnt << endl;
}
