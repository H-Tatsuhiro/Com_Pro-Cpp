#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string N; cin >> N;
    if (N[0] == N[1] && N[1] == N[2] && N[2] == N[3]) printf("%s\n", "SAME");
    else printf("%s\n", "DIFFERENT");
}
