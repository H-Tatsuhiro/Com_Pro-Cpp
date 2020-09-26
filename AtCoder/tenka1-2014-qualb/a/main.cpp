#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    for (int i = 0; i < s.length(); i++) {
        string str = s.substr(i, 6);
        if (str == "HAGIYA") {
            cout << "HAGIXILE";
            i += 5;
        }
        else cout << s[i];
    }
    cout << endl;
}
