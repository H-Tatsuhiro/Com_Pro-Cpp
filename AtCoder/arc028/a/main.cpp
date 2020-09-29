#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, a, b; cin >> n >> a >> b;
    while (true) {
        n -= a;
        if (n <= 0) {
            cout << "Ant" << endl;
            break;
        }
        n -= b;
        if (n <= 0) {
            cout << "Bug" << endl;
            break;
        }
    }
}
