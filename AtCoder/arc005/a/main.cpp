#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        if (s == "TAKAHASHIKUN" || s == "Takahashikun" || s == "takahashikun" || s == "TAKAHASHIKUN." || s == "Takahashikun." || s == "takahashikun." ) cnt++;
    }
    cout << cnt << endl;
}
