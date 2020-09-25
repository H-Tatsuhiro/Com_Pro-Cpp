#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
  int X; cin >> X;
  int d = 400;
  for (int i = 8; i > 0; i--) {
    if (d <= X && X <= d + 199) {
        cout << i << endl;
        break;
    }
    else {
        d += 200;
    }
  }
}
