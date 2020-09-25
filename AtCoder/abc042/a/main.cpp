#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> x(3, 0);
    cin >> x[0] >> x[1] >> x[2];
    sort(x.begin(), x.end());
    if (x[0] == 5 && x[1] == 5 && x[2] == 7) printf("%s\n", "YES");
    else printf("%s\n", "NO");
}
