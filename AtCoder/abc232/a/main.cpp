#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    int a = s[0] - '0', b = s[2] - '0';
    cout << a * b << endl;
}