#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<string> s(n, "");
    for (int i = 0; i < n; i++) cin >> s[i], reverse(s[i].begin(), s[i].end());
    sort(s.begin(), s.end());
    for (auto a: s) {
        reverse(a.begin(), a.end());
        cout << a << endl;
    }
}
