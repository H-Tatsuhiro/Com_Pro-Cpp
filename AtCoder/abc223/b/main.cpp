#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    vector<string> v;
    v.push_back(s);
    for (int i = 0; i < s.length(); i++) {
        string a = s.substr(0, i), b = s.substr(i, s.length() - i), t = "";
        t = b + a;
        v.push_back(t);
    }
    sort(v.begin(), v.end());
    cout << v[0] << endl << v[v.size() - 1] << endl;
}
