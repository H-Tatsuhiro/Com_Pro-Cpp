#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0), b(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    int x = 0, y = 0;
    for (int i = 0; i < n; i++) if (a[i] == b[i]) x++;
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) if (i != j && a[i] == b[j]) y++;
    cout << x << endl << y << endl;
}
