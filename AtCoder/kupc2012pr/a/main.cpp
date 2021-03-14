#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
long long int ack(int m,int n) {
    if(m == 0) return n + 1;
    if(n == 0) return ack(m - 1,1);
    if(m == 3) return (1LL << (n + 3)) - 3;
    return ack(m - 1,ack(m,n - 1));
}
int main() {
    long long int n, m; cin >> n >> m;
    cout << ack(n, m) << endl;
}
