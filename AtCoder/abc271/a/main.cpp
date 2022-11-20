#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<char> v = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    string ans = "";
    while(n >= 0) {
        ans += v[n % 16];
        n /= 16;
        if (n == 0) break;
    }
    if (ans.length() < 2) ans += '0';
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}
