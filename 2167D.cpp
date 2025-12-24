#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a[100000];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        int i;

        for (long long x = 2; x <= 200; x++) {
        bool flag = false;
            for (int i = 0; i < n; i++) {
                if (__gcd(x, a[i]) == 1) {
                    cout << x << endl;
                    flag = true;
                    break;
                }
            }
            if (flag) {
                break;
            }
        }

    }
    return 0;
}