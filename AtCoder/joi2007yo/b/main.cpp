#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    unordered_map<int, bool> Map;
    for (int i = 0; i < 28; i++) {
        int a; cin >> a;
        Map[a] = true;
    }
    for (int i = 1; i <= 30; i++) {
        if (!Map[i]) cout << i << endl;
    }
}
