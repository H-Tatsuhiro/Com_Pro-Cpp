#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    if (s == "Sunday" || s == "Saturday") cout << 0;
    else if (s == "Monday") cout << 5;
    else if (s == "Tuesday") cout << 4;
    else if (s == "Wednesday") cout << 3;
    else if (s == "Thursday") cout << 2;
    else cout << 1;
    cout << endl;
}
