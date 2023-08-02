#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; string s; cin >> n >> s;
    bool t = false;
    for (int i = 0; i < n; i++) {
        if (s[i] == '"') {
            if (!t) t = true;
            else t = false;
        }
        else if (s[i] == ',' && !t) s[i] = '.';
    }
    cout << s << endl;
}


