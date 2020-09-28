#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, l; string s; cin >> n >> l >> s;
    int a = 1; n = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '+') a++;
        else a--;
        if (a > l) n++, a = 1;
    }
    cout << n << endl;
}
