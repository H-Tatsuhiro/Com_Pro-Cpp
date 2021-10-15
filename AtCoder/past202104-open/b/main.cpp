#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    for (int i = 0; i < s.length(); i += 4) {
        if (s.substr(i, 4) == "post") {
            cout << i / 4 + 1 << endl;
            return 0;
        }
    }
    cout << "none" << endl;
    return 0;
}
