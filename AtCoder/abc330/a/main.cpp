#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, l; cin >> n >> l;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    int cnt = 0;
    for (int i = 0; i < n; i++) if (a[i] >= l) cnt++;
    cout << cnt << endl;
}


