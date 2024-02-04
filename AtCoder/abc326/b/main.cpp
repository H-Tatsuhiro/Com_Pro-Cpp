#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    for (int i = n; i <= 999; i++) {
        string s = to_string(i);
        if ((s[0] - '0') * (s[1] - '0') == s[2] - '0') {
            cout << i << endl;
            return 0;
        }
    }
}


