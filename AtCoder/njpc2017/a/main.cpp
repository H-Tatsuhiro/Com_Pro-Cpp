#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; int l; cin >> l >> s;
    if (s.length() <= l) cout << s << endl;
    else cout << s.substr(0, l) << endl;
}
