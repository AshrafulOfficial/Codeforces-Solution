#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string mode;
    cin >> mode;

    if (mode == "first") {
        int n; cin >> n;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            cout << char('a' + x - 1);
        }
        cout << "\n";
    } else {
        string s; cin >> s;
        cout << s.size() << " ";
        for (char c : s) {
            cout << (c - 'a' + 1) << " ";
        }
        cout << "\n";
    }
}
