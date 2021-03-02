#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int c; cin >> c;
    vector<int> ans(3, -1);
    for (int i = 0; i < c; i++) {
        vector<int> v(3, 0);
        cin >> v[0] >> v[1] >> v[2];
        sort(v.begin(), v.end());
        for (int j = 0; j < 3; j++) if (ans[j] < v[j]) ans[j] = v[j];
    }
    cout << ans[0] * ans[1] * ans[2] << endl;
}
