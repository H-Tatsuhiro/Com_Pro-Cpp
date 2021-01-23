#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a, b; cin >> a >> b;
    string s; cin >> s;
    if (a <= s.length() && b >= s.length()) cout << "YES" << endl;
    else cout << "NO" << endl;
}
