#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    if (s[s.length() - 1] == 'r' && s[s.length() - 2] == 'e') cout << "er" << endl;
    else cout << "ist" << endl;
}
