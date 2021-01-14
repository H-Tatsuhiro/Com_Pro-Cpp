#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string n; cin >> n;
    unsigned long long int a = 0, b = 0;
    reverse(n.begin(), n.end());
    for (int i = 0; i < n.length(); i++) {
        if (i % 2 == 0) b += n[i] - '1' + 1;
        else a += n[i] - '1' + 1;
    }
    cout << a << " " << b << endl;
}
