#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    bool t = true;
    for (int i = 1; i <= 15; i += 2) if (s[i] == '1') t = false;
    cout << (t ? "Yes" : "No") << endl;
}


