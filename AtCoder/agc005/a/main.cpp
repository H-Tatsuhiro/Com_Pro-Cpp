#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;
int main() {
    string x; cin >> x;
    stack<char> S;
    for (int i = 0; i < x.length(); i++) {
        if (S.size() == 0) S.push(x[i]);
        else if (S.top() == 'S' && x[i] == 'T') S.pop();
        else S.push(x[i]);
    }
    cout << S.size() << endl;
}
