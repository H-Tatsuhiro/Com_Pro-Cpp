#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int k; cin >> k;
    string s = "";
    for (int i = 0; i < k; i++) {
        s += char('A' + i);
    }
    cout << s << endl;
}


