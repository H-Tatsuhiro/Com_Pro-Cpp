#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    long long int cnt = 0, tail = s.length() - 1;
    for (int i = s.length() - 1; i >= 0; i--) {
        if (s[i] == 'B') cnt += abs(tail - i), tail--;
    }
    cout << cnt << endl;
}
