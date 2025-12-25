#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);

        for(int i=0; i<n; i++){
            cin>>v[i];
        }

        bool x = false;
        bool y = false;

        for(int i=0; i<n; i++){
            if(v[i] % 2 == 0){
                x = true;
            }
            else{
                y = true;
            }
        }

        if(x && y){
            sort(v.begin(), v.end());
        }
        for(int i=0; i<n; i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}