#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, a, b; cin >> n >> a >> b;
    string s; cin >> s;
    reverse(s.begin() + a - 1, s.begin() + b);
    cout << s << endl;
}
