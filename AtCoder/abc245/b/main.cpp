#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n, a; cin >> n;
    unordered_map<int, bool> Map;
    for (int i = 0; i < n; i++) cin >> a, Map[a] = true;
    for (int i = 0; i < 2002; i++) {
        if (!Map[i]) {
            cout << i << endl;
            break;
        }
    }
}
