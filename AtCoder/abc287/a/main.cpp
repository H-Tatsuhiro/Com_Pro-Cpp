#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        if (s == "For") sum++;
    }
    cout << (sum > n / 2 ? "Yes" : "No") << endl;
}


