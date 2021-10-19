#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    long long int a = 1;
    for (int i = 1; i < s.length(); i += 2) {
        if (s[i] == '+') a++;
        else a--;
    }
    cout << a << endl;
}
