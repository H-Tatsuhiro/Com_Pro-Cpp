#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    vector<bool> v(10, false);
    for (int i = 0; i < 10; i++) {
        string s; cin >> s;
        for (int j = 0; j < 10; j++) {
            if (s[j] == 'o') v[j] = true;
        }
    }
    int cnt = 0;
    for (int i = 0; i < 10; i++) {
        if (v[i] == false) cnt++;
   }if (cnt > 0) cout << "No" << endl;
    else cout << "Yes" << endl;
}
