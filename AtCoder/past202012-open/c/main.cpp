#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }
    vector<char> v = {'0',
                    '1',
                    '2',
                    '3',
                    '4',
                    '5',
                    '6',
                    '7',
                    '8',
                    '9',
                    'A',
                    'B',
                    'C',
                    'D',
                    'E',
                    'F',
                    'G',
                    'H',
                    'I',
                    'J',
                    'K',
                    'L',
                    'M',
                    'N',
                    'O',
                    'P',
                    'Q',
                    'R',
                    'S',
                    'T',
                    'U',
                    'V',
                    'W',
                    'X',
                    'Y',
                    'Z'};
    string ans = "";
    while (n > 0) {
        ans += v[n % 36];
        n /= 36;
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
    return 0;
}
