#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    vector<string> v = {
            "WBWBWWBWBWBWWBWBWWBW",
            "WBWWBWBWBWWBWBWWBWBW",
            "WWBWBWBWWBWBWWBWBWBW",
            "WBWBWBWWBWBWWBWBWBWW",
            "WBWBWWBWBWWBWBWBWWBW",
            "WBWWBWBWWBWBWBWWBWBW",
            "WWBWBWWBWBWBWWBWBWWB"};
    vector<string> c = {"Do", "Re", "Mi", "Fa", "So", "La", "Si"};
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == s) {
            cout << c[i] << endl;
            break;
        }
    }
}
