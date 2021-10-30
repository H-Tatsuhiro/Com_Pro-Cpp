#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
int main() {
    string s; cin >> s;
    set<string> S;
    sort(s.begin(), s.end());
    S.insert(s);
    do {
        S.insert(s);
    } while(next_permutation(s.begin(), s.end()));
    cout << S.size() << endl;
}
