#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
  int n; cin >> n;
  vector<vector<int>> a(n);
  for (int i = 0; i < n; i++) {
      a[i].resize(i + 1);
      for (int j = 0; j < a[i].size(); j++) {
          if (j == 0 || j == a[i].size() - 1) a[i][j] = 1;
          else a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
      }
  }
  for (int i = 0; i < n; i++) for (int j = 0; j < a[i].size(); j++) cout << a[i][j] << (j == a[i].size() - 1 ? '\n' : ' ');
}
