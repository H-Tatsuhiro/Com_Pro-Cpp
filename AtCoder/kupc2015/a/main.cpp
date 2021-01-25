#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        string s; cin >> s;
        int cnt = 0, j = 0;
        while (j < s.length()) {
            if (s.substr(j, 5) == "tokyo" || s.substr(j, 5) == "kyoto") cnt++, j += 4;
            else j++;
        }
        cout << cnt << endl;
    }
}
