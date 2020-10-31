#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    int a = 0, b = 0;
    for (int i = 0; i < s.length() - 2; i++) {
        if (s.substr(i, 3) == "JOI") a++;
        else if (s.substr(i, 3) == "IOI") b++;
    }
    cout << a << '\n' << b << endl;
}
