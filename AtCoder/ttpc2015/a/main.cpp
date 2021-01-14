#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    if (s[2] == 'B') cout << "Bachelor" << " " << s[0] << s[1] << endl;
    else if (s[2] == 'M') cout << "Master" << " " << s[0] << s[1] << endl;
    else cout << "Doctor" << " " << s[0] << s[1] << endl;
}
