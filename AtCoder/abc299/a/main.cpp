#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; string s; cin >> n >> s;
    bool t = false, f = false;
    for (int i = 0; i < n; i++) {
        if (s[i] == '*') {
            for (int j = i - 1; j >= 0; j--) if (s[j] == '|') t = true;
            for (int j = i + 1; j < n; j++) if (s[j] == '|') f = true;
        }
    }
    cout << (t && f ? "in" : "out") << endl;
}


