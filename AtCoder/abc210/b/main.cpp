#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; string s; cin >> n >> s;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            cout << (i % 2 == 0 ? "Takahashi" : "Aoki") << endl;
            return 0;
        }
    }
}
