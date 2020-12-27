#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    sort(s.begin(), s.end());
    string t = "yahoo";
    sort(t.begin(), t.end());
    if (s == t) cout << "YES" << endl;
    else cout << "NO" << endl;
}
