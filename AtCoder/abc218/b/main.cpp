#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string a = "", b = "";
    for (char c = 'a'; c <= 'z'; c++) a += c;
    for (int i = 0; i < 26; i++) {
        int n; cin >> n;
        b += a[n - 1];
    }
    cout << b << endl;
}
