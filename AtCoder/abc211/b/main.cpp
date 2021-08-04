#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    string a, b, c, d; cin >> a >> b >> c >> d;
    unordered_map<string, int> Map;
    Map[a]++, Map[b]++, Map[c]++, Map[d]++;
    if (Map["H"] == 1 && Map["2B"] == 1 && Map["3B"] == 1 && Map["HR"] == 1) cout << "Yes" << endl;
    else cout << "No" << endl;
}
