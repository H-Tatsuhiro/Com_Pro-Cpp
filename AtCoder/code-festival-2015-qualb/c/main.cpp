#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<int> a(n, 0), b(m, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    sort(b.begin(), b.end());
    reverse(b.begin(), b.end());
    int x = 0;
    if (n < m) {
        cout << "NO" << endl;
        return 0;
    }
    for (int i = 0; i < m; i++) {
       if (a[x] >= b[i]) x++;
       else {
           cout << "NO" << endl;
           return 0;
       }
    }
    cout << "YES" << endl;
    return 0;
}
