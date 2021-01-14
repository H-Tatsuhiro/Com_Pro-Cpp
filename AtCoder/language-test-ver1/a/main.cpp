#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; string s; cin >> n >> s;
    int a = -1, b = -1;
    for (int i = 1; i <= 4; i++) {
        int tmp = 0;
        for (int j = 0; j < n; j++) if (i == s[j] - '1' + 1) tmp++;
        if (a == -1) a = tmp;
        if (b == -1) b = tmp;
        a = max(a, tmp), b = min(b, tmp);
    }
    cout << a << " " << b << endl;
}
