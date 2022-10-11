#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <boost/lexical_cast.hpp>
using namespace std;
using namespace boost;
int main() {
    string s; cin >> s;
    unordered_map<int, bool> Map;
    for (int i = 0; i < s.length(); i++) Map[lexical_cast<int>(s[i])] = true;
    for (int i = 0; i < 10; i++) if (!Map[i]) cout << i << endl;
}
