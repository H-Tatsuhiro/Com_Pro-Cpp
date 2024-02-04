#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; string s; cin >> n >> s;
    int ans = -1;
    for (int i = 0; i < n - 2; i++) {
        string t = s.substr(i, 3);
        if (t == "ABC") {
            ans = i + 1;
            break;
        }
    }
    cout << ans << endl;
}


