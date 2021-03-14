#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    string ans = "1";
    for (int i = 1; i < n; i++) ans += '0';
    cout << ans << endl;
}
