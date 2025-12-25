#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char c[n];
        for(int i=0; i<n; i++){
            cin>>c[i];
        }
        int count = 1;
        for(int i=0; i<n-1; i++){
            if(c[n-1] == c[i]){
                count++;
            }
        }

        cout<<n-count<<endl;
    }
    return 0;
}