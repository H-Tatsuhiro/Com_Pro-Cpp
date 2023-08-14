#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<string> s(n, "");
    for (int i = 0; i < n; i++) cin >> s[i];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            string t = s[i] + s[j];
            bool f = true;
            for (int k = 0; k < t.size() / 2; k++) if (t[k] != t[t.length() - 1 - k]) f = false;
            if (f) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}


