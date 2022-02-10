#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n; cin >> n;
    vector<string> v(n, "");
    unordered_map<string, int> Map;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        Map[v[i]]++;
    }
    int ans = -1;
    string t = "";
    for (int i = 0; i < n; i++) {
        if (ans < Map[v[i]]) {
            ans = Map[v[i]];
            t = v[i];
        }
    }
    cout << t << endl;
}
