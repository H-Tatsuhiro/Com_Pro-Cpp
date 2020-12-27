#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a; string s; cin >> a >> s;
    if (a == 0) {
        cout << "Yes" << endl;
        return 0;
    }
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '+') a++;
        else a--;
        if (a == 0) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
