#include <iostream>
#include <cmath>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    unordered_map<long long int, int> Map;
    for (int i = 1; i <= 100; i++) {
        for (int j = i; j >= 1; j--) {
            for (int k = j; k >= 1; k--) {
                long long int sum = i * i + j * j + k * k + i * j + j * k + i * k;
                if (i == j && j == k) Map[sum]++;
                else if ((i == j && i != k) || (k == j && i != k) || (i == k && j != k)) Map[sum] += 3;
                else Map[sum] += 6;
            }
        }
    }
    for (int i = 1; i <= n; i++) cout << Map[i] << endl;
}
