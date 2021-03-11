#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    vector<int> a(3, 0), b(3, 0);
    for (int i = 0; i < 3; i++) cin >> a[i];
    for (int i = 0; i < 3; i++) cin >> b[i];
    vector<int> ans;
    ans.push_back(abs(a[0] - b[0]) + abs(a[1] - b[1]) + abs(a[2] - b[2]));
    ans.push_back(abs(a[0] - b[0]) + abs(a[2] - b[1]) + abs(a[1] - b[2]));
    ans.push_back(abs(a[1] - b[0]) + abs(a[0] - b[1]) + abs(a[2] - b[2]));
    ans.push_back(abs(a[1] - b[0]) + abs(a[2] - b[1]) + abs(a[0] - b[2]));
    ans.push_back(abs(a[2] - b[0]) + abs(a[0] - b[1]) + abs(a[1] - b[2]));
    ans.push_back(abs(a[2] - b[0]) + abs(a[1] - b[1]) + abs(a[0] - b[2]));
    sort(ans.begin(), ans.end());
    cout << ans[0] << endl;
}
