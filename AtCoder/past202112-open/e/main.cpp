#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    string n; cin >> n;
    long long int ans = 0;
    unordered_map<char, bool> Map;
    for (char i = '1'; i <= '5'; i++) Map[i] = true;
    for (int i = 0; i < n.length(); i++) {
        if (i == 0) ans += 500;
        else if (n[i - 1] == n[i]) ans += 301;
        else {
            if (Map[n[i - 1]] == Map[n[i]]) ans += 210;
            else ans += 100;
        }
    }
    cout << ans << endl;
}
