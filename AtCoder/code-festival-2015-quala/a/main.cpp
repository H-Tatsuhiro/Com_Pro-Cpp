#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    s[s.length() - 1] = '5';
    cout << s << endl;
}
