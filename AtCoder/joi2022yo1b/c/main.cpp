#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; string s; cin >> n >> s;
    for (int i = 0; i < n - 1; i++) if (s[i + 1] == 'J') cout << s[i] << endl;
}
