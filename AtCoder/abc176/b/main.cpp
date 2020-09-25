#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    int n = s.length();
    long long int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += (int)(s[i] - 48);
    }
    if (sum % 9 == 0 || sum == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}
