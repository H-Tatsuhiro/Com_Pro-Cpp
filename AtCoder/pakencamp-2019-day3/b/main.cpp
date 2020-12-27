#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, b = 0; cin >> n;
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        if (s == "black") b++;
    }
    if (n - b < b) cout << "black" << endl;
    else cout << "white" << endl;
}
