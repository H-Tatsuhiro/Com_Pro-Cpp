#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a, b; cin >> a >> b;
    long long int ans = 1;
    for (int i = b; i < a; i++) ans *= 32;
    cout << ans << endl;
}
