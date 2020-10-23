#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    int n = s.length();
    string t = "";
    for (int i = 0; i < n; i++) if (s[i] == 'i' || s[i] == 'c' || s[i] == 't' || s[i] == 'I' || s[i] == 'C' || s[i] == 'T') t += s[i];
    n = t.length();
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if ((t[i] == 'i' || t[i] == 'I') && (t[j] == 'c' || t[j] == 'C') && (t[k] == 't' || t[k] == 'T')) {
                    cout << "YES" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}
