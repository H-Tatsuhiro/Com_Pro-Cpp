#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    int ans = 3000;
    for (char m = 'a'; m <= 'z'; m++) {
        int tmp = 0;
        for (int i = 0; i < s.length();) {
            int j = i;
            while (j < s.length() && ((s[j] != m && s[i] != m) || (s[i] == m && s[j] == m))) j++;
            if (s[i] != m) tmp = max(tmp, j - i);
            i = j;
        }
        ans = min(ans, tmp);
    }
    cout << ans << endl;
}