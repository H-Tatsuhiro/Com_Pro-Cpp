#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int t; cin >> t;
    function<int(int)> f = [](int x) -> int {
        return x * x + 2 * x + 3;
    };
    cout << f(f(f(t) + t) + f(f(t))) << endl;
}
