#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'O') s[i] = 'A';
        else if (s[i] == 'A') s[i] = 'O';
    }
    cout << s << endl;
}
