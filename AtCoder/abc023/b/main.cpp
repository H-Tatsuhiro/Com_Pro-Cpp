#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; string s; cin >> n >> s;
    int ans = 0; bool t = true;
    if (n % 2 == 0) t = false;
    for (int i = 0; i <= n / 2 && t; i++) {
        if (i == 0 && s[(n / 2) - i] != 'b') t = false;
        else {
            if (i % 3 == 0 && !(s[(n / 2) - i]) == 'b' && s[(n / 2) + i] == 'b') t = false;
            else if (i % 3 == 1 && !(s[(n / 2) - i] == 'a' && s[(n / 2) + i] == 'c')) t = false;
            else if (i % 3 == 2 && !(s[(n / 2) - i] == 'c' && s[(n / 2) + i] == 'a')) t = false;
        }
    }
    if (t) cout << (n - 1) / 2 << endl;
    else cout << -1 << endl;
}
