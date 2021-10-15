#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    for (int i = 0; i < 8; i++) {
        if (i == 3) {
            if (s[i] != '-') {
                cout << "No" << endl;
                return 0;
            }
        }
        else {
            if (s[i] - '0' > 10) {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}
