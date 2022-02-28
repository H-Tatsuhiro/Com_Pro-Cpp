#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n; cin >> n;
    unordered_map<string, bool> Map;
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        if (!Map[s]) Map[s] = true, cout << i + 1 << endl;
    }
}
