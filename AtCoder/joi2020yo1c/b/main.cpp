#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; string s; cin >> n >> s;
    for (int i = 0; i < n - 2; i++) {
        string str = s.substr(i, 3);
        if (str == "joi") {
            s[i + 0] = 'J', s[i + 1] = 'O', s[i + 2] = 'I';
        }
    }
    cout << s << endl;
}
