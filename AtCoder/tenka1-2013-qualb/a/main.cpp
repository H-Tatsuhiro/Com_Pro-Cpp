#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    vector<string> s(15, "");
    for (int i = 0; i < 15; i++) cin >> s[i];
    sort(s.begin(), s.end());
    cout << s[6] << endl;
}
