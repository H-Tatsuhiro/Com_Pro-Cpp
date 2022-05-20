#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    string t = s;
    while(t.length() + s.length() <= 6) t += s;
    cout << t << endl;
}
