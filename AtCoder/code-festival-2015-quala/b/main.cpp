#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    long long int sum= 0, tmp = 0;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        sum = sum * 2 + a;
    }
    cout << sum << endl;
}
