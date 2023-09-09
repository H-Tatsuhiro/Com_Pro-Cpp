#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    for (char &c: s) if (c != 'a' && c != 'i' && c != 'u' && c != 'e' && c != 'o') cout << c;
    cout << endl;
}


