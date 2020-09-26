#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n, ans = 1; cin >> n;
    unordered_map<int, int> Map;
    bool t = true;
    for (int i = 1; i <= n; i++) {
        Map[i] = ans;
        if (t) ans++;
        else ans--;
        if (ans > 20) t = false, ans = 20;
        else if (ans < 1) t = true, ans = 1;
    }
    cout << Map[n] << endl;
}
