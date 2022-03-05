#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
   string s, t = ""; cin >> s;
   unordered_map<char, int> Map;
   for (int i = 0; i < s.length(); i++) Map[s[i]]++;
   for (char c = 'a'; c <= 'z'; c++) {
       while (Map[c]) {
           t += c;
           Map[c]--;
       }
   }
   cout << t << endl;
}
