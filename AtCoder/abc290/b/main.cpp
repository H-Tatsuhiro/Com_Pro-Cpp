#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (c < k && s[i] == 'o') {
            cout << 'o';
            c++;
        }
        else cout << 'x';
    }
    cout << endl;
}


