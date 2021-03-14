#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        if (s == "Mon") cout << "Tue" << endl;
        else if (s == "Tue") cout << "Wed" << endl;
        else if (s == "Wed") cout << "Thu" << endl;
        else if (s == "Thu") cout << "Fri" << endl;
        else if (s == "Fri") cout << "Sat" << endl;
        else if (s == "Sat") cout << "Sun" << endl;
        else cout << "Mon" << endl;
    }
}
