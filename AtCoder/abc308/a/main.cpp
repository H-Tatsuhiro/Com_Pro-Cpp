#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    bool t = true;
    vector<int> s(8, 0);
    for (int i = 0; i < 8; i++) cin >> s[i];
    for (int i = 0; i < 7; i++) if (!(s[i] <= s[i + 1])) t = false;
    for (int i = 0; i < 8; i++) {
        if (100 <= s[i] && s[i] <= 675) {
            if (s[i] % 25 != 0) t = false;
        }
        else t = false;
    }
    cout << (t ? "Yes" : "No") << endl;
}


