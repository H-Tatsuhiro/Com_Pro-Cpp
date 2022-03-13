#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
int main() {
    long long int n;
    cpp_int x; cin >> n >> x;
    string s; cin >> s;
    string t = "";
    stack<char> S;
    for (int i = 0; i < n; i++) {
        if (S.size() == 0) S.push(s[i]);
        else if (s[i] == 'U' && S.top() != 'U') S.pop();
        else S.push(s[i]);
    }
    while (!S.empty()) {
        t.push_back(S.top());
        S.pop();
    }
    reverse(t.begin(), t.end());

    for (int i = 0; i < t.length(); i++) {
        if (t[i] == 'U') x /= 2;
        else if (t[i] == 'L') x = x * 2;
        else x = x * 2 + 1;
    }
    cout << x << endl;
}
