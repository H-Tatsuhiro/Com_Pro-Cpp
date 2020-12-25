#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    string t = "indeednow";
    sort(t.begin(), t.end());
    for (int i = 0; i < n; i++) {
        string str; cin >> str;
        sort(str.begin(), str.end());
        if (t == str) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
