#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    string s; long long int k; cin >> s >> k;
    int n = s.length();
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) a[i] = i + 1;
    vector<string> ss;
    unordered_map<string, bool> Map;
    do {
        string t = "";
        for (int i = 0; i < n; i++) t += s[a[i] - 1];
        if (!Map[t]) {
            Map[t] = true;
            ss.push_back(t);
        }
    } while(next_permutation(a.begin(), a.end()));
    sort(ss.begin(), ss.end());
    cout << ss[k - 1] << endl;
}
