#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;
int main() {
    int q; cin >> q;
    stack<string> s;
    for (int i = 0; i < q; i++) {
        string S; cin >> S;
        if (S == "READ") {
            cout << s.top() << endl;
            s.pop();
        }
        else s.push(S);
    }
}
