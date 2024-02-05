#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    string s = "1";
    vector<int> a;
    for (int i = 1; i <= 9; i++) if (n % i == 0) a.push_back(i);
    for (int i = 1; i <= n; i++) {
        string c = "-";
        for (int b: a) {
            if (i % (n / b) == 0) {
                c = to_string(b);
                break;
            }
        }
        s += c;
    }
    cout << s << endl;
}


