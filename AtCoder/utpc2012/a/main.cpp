#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    string a = s.substr(0, 4), b = s.substr(5, 2) + s.substr(8, 2);
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if (a == b) cout << "yes" << endl;
    else cout << "no" << endl;
}
