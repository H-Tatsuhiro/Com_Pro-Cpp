#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <atcoder/modint>
using namespace std;
using namespace atcoder;
int main(){
    long long int n, p; cin >> n >> p;
    modint1000000007 x = p;
    modint1000000007 ans = (x - 1) * (x - 2).pow(n - 1);
    cout << ans.val() << endl;
}

