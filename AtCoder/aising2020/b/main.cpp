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
    for (int i = 0; i < n; i += 2) if (a[i] % 2 != 0) cnt++;
    cout << cnt << endl;
}
