#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main()  {
    string s; cin >> s;
    for (int i = 0; i < s.length(); i++) s[i] = (s[i] == '1' ? '0' : '1');
    cout << s << endl;
}


