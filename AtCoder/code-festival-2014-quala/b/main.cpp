#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    int a, n = s.length(); cin >> a;
    if (a % s.length() == 0) cout << s[s.length() - 1] << endl;
    else cout << s[a % s.length() - 1] << endl;
}
