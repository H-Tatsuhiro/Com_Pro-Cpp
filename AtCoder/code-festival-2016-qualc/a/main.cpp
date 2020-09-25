#include <iostream>
using namespace std;
int main() {
    string s; cin >> s;
    int a = 10e6, b = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'C') a = min(a, i);
        if (s[i] == 'F') b = max(b, i);
    }
    if (a < b) printf("%s\n", "Yes");
    else printf("%s\n", "No");
}