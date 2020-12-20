#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, cnt = 0; string s, t = ""; cin >> n >> s;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0 && s[i] != 'I') cnt++;
        else if (i % 2 != 0 && s[i] != 'O' ) cnt++;
    }
    cout << cnt << endl;
}
