#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, cnt = 0; cin >> n;
    vector<int> v(n, 0), e(n, 0);
    for (int i = 0; i < n; i++) cin >> v[i];
    for (int i = 0; i < n; i++) cin >> e[i];
    for (int i = 0; i < n; i++) if (v[i] / 2 < e[i]) cnt++;
    cout << cnt << endl;
}
