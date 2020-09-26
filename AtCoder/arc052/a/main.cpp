#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (48 <= s[i] && s[i] <= 57) {
            if (48 <= s[i + 1] && s[i + 1] <= 57) {
                cout << s[i] << s[i + 1] << endl;
                return 0;
            }
            else {
                cout << s[i] << endl;
                return 0;
            }
        }
    }
}
