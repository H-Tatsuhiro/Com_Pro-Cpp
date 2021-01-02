#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int sed(int N) {
    string s = to_string(N);
    int r = 0;
    for (int i = 0; i < s.length(); i++) r += (int)(s[i] - 48);
    return r;
}
int main() {
    int a, b; cin >> a >> b;
    if (sed(a) > sed(b)) cout << sed(a) << endl;
    else if (sed(a) < sed(b)) cout << sed(b) << endl;
    else cout << sed(a) << endl;
}
