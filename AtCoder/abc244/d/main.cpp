#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s = "", t = "";
    for (int i = 0; i < 3; i++) {
        char c; cin >> c, s.push_back(c);
    }
    for (int i = 0; i < 3; i++) {
        char c; cin >> c, t.push_back(c);
    }
    function<bool(string)> solve = [](string x) -> bool {
        return x == "RGB" || x == "BRG" || x == "GBR";
    };
    if (solve(s) == solve(t)) cout << "Yes" << endl;
    else cout << "No" << endl;
}
