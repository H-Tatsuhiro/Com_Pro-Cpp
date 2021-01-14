#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> ans(30, 0);
    for (int i = 0; i < n; i++) {
        int a; cin >> a; ans[a]++;
    }
    for (int i = 0; i < 30; i++) {
        if (i == 29) cout << ans[i] << endl;
        else cout << ans[i] << " ";
    }
}
