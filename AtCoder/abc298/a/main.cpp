#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; string s; cin >> n >> s;
    int c = 0, d = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'o') c++;
        if (s[i] == 'x') d++;
    }
    cout << (c > 0 && d == 0 ? "Yes" : "No") << endl;
}


