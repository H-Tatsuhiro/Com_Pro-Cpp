#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main()  {
    int n; string s; cin >> n >> s;
    bool a = false, b = false, c = false;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') a = true;
        if (s[i] == 'B') b = true;
        if (s[i] == 'C') c = true;
        if (a && b && c) {
            cout << i + 1 << endl;
            return 0;
        }
    }
}


