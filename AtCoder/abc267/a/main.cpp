#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s, t = "ouehr"; cin >> s;
    for (int i = 0; i < t.length(); i++) if (t[i] == s[1]) cout << 5 - i << endl;
}
