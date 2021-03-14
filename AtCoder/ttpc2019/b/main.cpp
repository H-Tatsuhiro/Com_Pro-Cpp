#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        bool flag = false;
        for (int j = 0; j < s.length(); j++) {
            if (j + 3 >= s.length()) continue;
            string t = s.substr(j, 4);
            if (t == "okyo") {
                for (int k = j + 1; k < s.length(); k++) {
                    if (k + 2 >= s.length()) continue;
                    string f = s.substr(k, 3);
                    if (f == "ech") flag = true;
                }
            }
        }
        if (flag) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}
