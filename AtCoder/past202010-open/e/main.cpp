#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; string s; cin >> n >> s;
    string tmp = "";
    for (int i = n - 1; i >= 0; i--) tmp += s[i];
    vector<int> v(n);
    for (int i = 0; i < n; i++) v[i] = i + 1;
    do {
        string t = "";
        for (int i = 0; i < n; i++) t += s[v[i] - 1];
        if (tmp != t && s != t) {
            cout << t << endl;
            return 0;
        }
    } while(next_permutation(v.begin(), v.end()));
    cout << "None" << endl;
    return 0;
}
