#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; string t; cin >> n >> t;
    function<long long int()> res = [&]() -> long long int {
        long long int ans = 10000000000;
        if (t == "0") return ans;
        else if (t == "1") return ans * 2;
        if (t.length() >= 1 && t[0] == '0') t = t.substr(1), ans--;
        else if (t.length() >= 2 && t.substr(0, 2) == "10") t = t.substr(2), ans--;
        if (t.length() % 3 == 1) {
            if (t.substr(t.length() - 1) != "1") return 0LL;
            t = t.substr(0, t.length() - 1);
            ans--;
        }
        else if (t.length() % 3 == 2) {
            if (t.substr(t.length() - 2) != "11") return 0LL;
            t = t.substr(0, t.length() - 2);
            ans--;
        }
        for (int i = 0; i < t.length(); i += 3) if (t.substr(i, 3) != "110") return 0LL;
        return ans - t.length() / 3 + 1;
    };
    cout << res() << endl;
}
