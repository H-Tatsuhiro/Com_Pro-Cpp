#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; string s; cin >> n >> s;
    string t = "";
    for (int i = 0; i < n; i++) {
        t += s[i];
        if (i < n - 1 && (s[i] == 'n' && s[i + 1] == 'a')) t += 'y';
    }
    cout << t << endl;
}


