
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(m);
        for (int i = 0; i < m; ++i) cin >> a[i];
        int ans = 0;
        for (int k = 1; k <= n; ++k) {
            for (int i = 0; i <= k - m; ++i) {
                bool match = true;
                for (int j = 0; j < m; ++j) {
                    if (a[j] != i + j + 1) {
                        match = false;
                        break;
                    }
                }
                if (match) ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
