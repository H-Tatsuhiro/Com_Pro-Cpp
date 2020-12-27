#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    if (s.length() <= 4) cout << "No" << endl;
    else if (s.substr(0, 5) == "MUJIN") cout << "Yes" << endl;
    else cout << "No" << endl;
}
