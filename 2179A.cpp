#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k,x;
        cin>>k>>x;
        if(k >= 1 && k<=26 && x >= 1 && x <= 15){
            int ans = (k*x)+1;
            cout<<ans<<endl;
        }
    }
    return 0;
}