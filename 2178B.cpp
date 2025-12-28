#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string r;
        cin>>r;

        int ans = 0;
        for(int i=0; i<r.size(); i++){
            if(r[i] == 'u' && (i == 0 || r[i-1] == 'u' || i == r.size()-1)){
                r[i] = 's';
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}