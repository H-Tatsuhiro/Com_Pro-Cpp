#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n, x;
    string s;
    cin >> n >> x >> s;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'o') x++;
        else {
            if (x >= 1) x--;
        }
    }
    cout << x << endl;
}
