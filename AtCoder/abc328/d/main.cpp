#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    int i = 0;
    while(true) {
        if (s.substr(i, 3) == "ABC") {
            s.replace(i, 3, "");
            if (i == s.size()) break;
            i = max(0, i - 2);
            continue;
        }
        i++;
        if (i == s.size()) break;
    }
    cout << s << endl;
}


