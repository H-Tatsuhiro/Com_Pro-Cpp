#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; string s; cin >> n >> s;
    string t = "";
   for (int i = 0; i < s.length(); i++) {
       string str = "";
       for (int j = 0; j < t.length(); j++) {
           if (s[i] != t[j]) str.push_back(t[j]);
       }
       t = str + s[i];
   }
   cout << t << endl;
}
