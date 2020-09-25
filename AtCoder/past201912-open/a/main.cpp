#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    bool T = false;
    for (int i = 0; i < 3; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            T = true; break;
        }
    }
    if (T) cout << "error" << endl;
    else cout << stoi(s) * 2 << endl;
}
