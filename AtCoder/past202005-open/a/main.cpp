#include <iostream>
#include <cmath>
#include <algorithm>
#include <cctype>
#include <string>
#include <vector>
#include <ctype.h>
using namespace std;
int main() {
    string s, t; cin >> s >> t;
    if (s == t) {
        printf("%s\n", "same");
    }
    else {
        string S, T;
        S.resize(s.size()); T.resize(t.size());
        transform(s.begin(), s.end(), S.begin(), ::toupper);
        transform(t.begin(), t.end(), T.begin(), ::toupper);
        if (S == T) printf("%s\n", "case-insensitive");
        else printf("%s\n", "different");
    }
}
