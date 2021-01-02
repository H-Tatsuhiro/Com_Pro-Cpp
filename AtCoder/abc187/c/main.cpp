#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n; cin >> n;
    vector<string> s(n, "");
    unordered_map<string, bool> Map;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        Map[s[i]] = true;
    }
    sort(s.begin(), s.end());
    for (auto x : s) {
        if (x[0] == '!')  {
            string y = x.substr(1, x.length() - 1);
            if (Map[y]) {
                cout << y << endl;
                return 0;
            }
        }
        else break;
    }
    cout << "satisfiable" << endl;
    return 0;
}
