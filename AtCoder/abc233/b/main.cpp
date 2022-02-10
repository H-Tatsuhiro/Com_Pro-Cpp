#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int l, r; string s; cin >> l >> r >> s;
    string t = s.substr(l - 1, r - l + 1);
    reverse(t.begin(), t.end());
    for (int i = 0; i < l - 1; i++) cout << s[i];
    cout << t;
    for (int i = r; i < s.length(); i++) cout << s[i];
    cout << endl;

}
