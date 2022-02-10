#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, k; string s; cin >> n >> k >> s;
    int red = 0;
    for (int i = 0; i < n - 1; i++) if (s[i] == 'R') red++;
    cout << (red == k ? "W" : "R") << endl;
}
