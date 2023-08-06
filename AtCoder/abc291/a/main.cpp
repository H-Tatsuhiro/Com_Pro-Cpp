#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    for (int i = 0; i < s.length(); i++) if ('A' <= s[i] && s[i] <= 'Z') cout << i + 1 << endl;
}


