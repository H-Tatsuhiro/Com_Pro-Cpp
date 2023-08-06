#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s, t = ""; cin >> s;
    for (int i = 0; i < s.length(); i++) {
        t += char('A' + (s[i] - 'a'));
    }
    cout << t << endl;
}


