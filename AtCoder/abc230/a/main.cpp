#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string n; cin >> n;
    int m = stoi(n);
    if (m >= 42) cout << "AGC0" << m + 1 << endl;
    else if (m >= 10) cout << "AGC0" << m << endl;
    else cout << "AGC00" << m << endl;
}
