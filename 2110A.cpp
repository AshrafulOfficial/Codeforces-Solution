#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;  // number of test cases

    while (t--) {
        int n;
        cin >> n;
        int a[n];
        int odd = 0, even = 0;

        // read array and count parity
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 0)
                even++;
            else
                odd++;
        }

        // remove the minimum group to make all same parity
        cout << min(odd, even) << endl;
    }

    return 0;
}
