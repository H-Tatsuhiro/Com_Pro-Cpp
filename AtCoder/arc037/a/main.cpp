#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        if (a <= 79) sum += 80 - a;
    }
    cout << sum << endl;
}
