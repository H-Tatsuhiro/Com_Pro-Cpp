#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n; cin >> n;
    for (int i = 0; i < n; i++) {
        long long int t; cin >> t;
        if (t % 4 == 0) cout << "Even" << endl;
        else if (t % 2 == 0) cout << "Same" << endl;
        else cout << "Odd" << endl;
    }
}
