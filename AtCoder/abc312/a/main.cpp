#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    vector<string> v = {"ACE", "BDF", "CEG", "DFA", "EGB", "FAC", "GBD"};
    for (int i = 0; i < v.size(); i++) {
        if (s == v[i]) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}


