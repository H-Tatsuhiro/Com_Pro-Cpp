#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string pi = "314159265358979323846264338327950";
    char n; cin >> n;
    for (int i = 0; i < pi.length(); i++) {
        if (n == pi[i]) {
            cout << i << endl;
            return 0;
        }
    }
}
