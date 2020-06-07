#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int X; cin >> X;
    int N = 10000000;
    vector<bool> is_prime(N + 1);
    for(int i = 0; i <= N; i++)
    {
        is_prime[i] = true;
    }
    for(int i = 2; i <= N; i++)
    {
        if( is_prime[i] )
        {
            for(int j = 2 * i; j <= N; j += i)
            {
                is_prime[j] = false;
            }
            if (i == X) {
                printf("%d\n", X);
                break;
            }
            else if (i > X) {
                printf("%d\n", i);
                break;
            }
        }
    }
}
