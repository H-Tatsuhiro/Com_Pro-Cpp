#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    vector<string> s(8, "");
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            char a; cin >> a;
            if (a == '*') cout << char('a' + j) << 8 - i << endl;
        }
    }
}