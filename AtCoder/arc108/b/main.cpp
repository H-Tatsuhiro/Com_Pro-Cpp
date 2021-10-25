#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; string s, t = ""; cin >> n >> s;
    for (int i = 0; i < n; i++) {
        t += s[i];
        if (t.size() >= 3) {
            if (t.substr(t.length() - 3, 3) == "fox") {
                t.pop_back();
                t.pop_back();
                t.pop_back();
            }
        }
    }
    cout << t.length() << endl;
}
