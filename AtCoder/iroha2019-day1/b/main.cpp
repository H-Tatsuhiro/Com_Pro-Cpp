#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; int k; cin >> s >> k;
    for (int i = 0; i < k; i++) s.push_back(s[0]), s.erase(s.begin());
    cout << s << endl;
}
