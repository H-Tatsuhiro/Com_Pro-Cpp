#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<string> s(n, "");
    for (int i = 0; i < n; i++) cin >> s[i];
    bool t = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            string x = "", y = "", z = "", v = "";
            for (int k = 0; k < 6; k++) {
                if (j + k < n) x += s[i][j + k];
                if (i + k < n) y += s[i + k][j];
                if (i + k < n && j + k < n) z += s[i + k][j + k];
                if (i + k < n && j - k >= 0) v += s[i + k][j - k];
            }
            int a = 0, b = 0, c = 0, d = 0;
            for (int k = 0; k < x.size(); k++) if (x[k] == '.') a++;
            for (int k = 0; k < y.size(); k++) if (y[k] == '.') b++;
            for (int k = 0; k < z.size(); k++) if (z[k] == '.') c++;
            for (int k = 0; k < v.size(); k++) if (v[k] == '.') d++;
            if (x.length() == 6 && a <= 2) t = true;
            if (y.length() == 6 && b <= 2) t = true;
            if (z.length() == 6 && c <= 2) t = true;
            if (v.length() == 6 && d <= 2) t = true;
        }
    }
    cout << (t ? "Yes" : "No") << endl;
}
