#include <bits/stdc++.h>
using namespace std;

map<long long, long long> memo;

long long maxCoins(long long x) {
    if (x <= 3) return 1;
    if (memo.count(x)) return memo[x];
    long long part = x / 4;
    return memo[x] = maxCoins(part) + maxCoins(part);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
        cout << maxCoins(x) << endl;
    }
    return 0;
}
