#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'O') cout << 0;
        else if (s[i] == 'D') cout << 0;
        else if (s[i] == 'I') cout << 1;
        else if (s[i] == 'Z') cout << 2;
        else if (s[i] == 'S') cout << 5;
        else if (s[i] == 'B') cout << 8;
        else cout << s[i];
    }
    cout << endl;
}
